#include"Floyd.h"
#include<stdio.h> 
#include<fstream>
#include<iostream>

#define INT_MAX 1000

//������������Ͷ�������ֵ�Ƿ���Ч�������Լ����㣺
//�������ͱ����Ĺ�ϵ�ǣ�((Vexnum*(Vexnum - 1)) / 2) < edge



//���캯��
Graph_DG::Graph_DG(int vexnum, int edge) {
    //��ʼ���������ͱ���
    this->vexnum = vexnum;
    this->edge = edge;
    //Ϊ�ڽӾ��󿪱ٿռ�͸���ֵ
    arc = new int*[this->vexnum];
    dis = new int*[this->vexnum];
    path = new int*[this->vexnum];
    for (int i = 0; i < this->vexnum; i++) {
        arc[i] = new int[this->vexnum];
        dis[i] = new int[this->vexnum];
        path[i] = new int[this->vexnum];
        for (int k = 0; k < this->vexnum; k++) {
            //�ڽӾ����ʼ��Ϊ�����
            arc[i][k] = INT_MAX;
        }
    }
}
//��������
Graph_DG::~Graph_DG() {

    for (int i = 0; i < this->vexnum; i++) {
        delete this->arc[i];
        delete this->dis[i];
        delete this->path[i];

    }
    delete dis;
    delete arc;
    delete path;
}

// �ж�����ÿ������ĵıߵ���Ϣ�Ƿ�Ϸ�
//�����1��ʼ���
bool Graph_DG::check_edge_value(int start, int end, int weight) {
    if (start<1 || end<1 || start>vexnum || end>vexnum || weight < 0) {
        return false;
    }
    return true;
}


void Graph_DG::createGraph(int kind) {
	
    //cout << "������ÿ���ߵ������յ㣨�����Ŵ�1��ʼ���Լ���Ȩ��" << endl;
    ifstream in("db.txt");
    int start;
    int end;
    int weight;
    int count = 0;
    while (count != this->edge) {
        in >> start >> end >> weight;
        //�����жϱߵ���Ϣ�Ƿ�Ϸ�
        while (!this->check_edge_value(start, end, weight)) {
            cout << "����ıߵ���Ϣ���Ϸ�������������" << endl;
            //cin >> start >> end >> weight;
        }
        //���ڽӾ����Ӧ�ϵĵ㸳ֵ
        arc[start - 1][end - 1] = weight;
        //����ͼ��������д���
        if(kind==2)
        arc[end - 1][start - 1] = weight;
        ++count;
    }
}


void Graph_DG::print() {
    cout << "ͼ���ڽӾ���Ϊ��" << endl;
    int count_row = 0; //��ӡ�еı�ǩ
    int count_col = 0; //��ӡ�еı�ǩ
                       //��ʼ��ӡ
    while (count_row != this->vexnum) {
        count_col = 0;
        while (count_col != this->vexnum) {
            if (arc[count_row][count_col] == INT_MAX)
                cout << "��" << " ";
            else
                cout << arc[count_row][count_col] << " ";
            ++count_col;
        }
        cout << endl;
        ++count_row;
    }
}


void Graph_DG::Floyd() {
    int row = 0;
    int col = 0;
    for (row = 0; row < this->vexnum; row++) {
        for (col = 0; col < this->vexnum; col++) {
            //�Ѿ���D��ʼ��Ϊ�ڽӾ����ֵ
            this->dis[row][col] = this->arc[row][col];
            //����P�ĳ�ֵ��Ϊ�����ߵ��յ㶥����±�
            this->path[row][col] = col;
        }
    }

    //����ѭ�������ڼ���ÿ����Ե����·��
    int temp = 0;
    int select = 0;
    for (temp = 0; temp < this->vexnum; temp++) {
        for (row = 0; row < this->vexnum; row++) {
            for (col = 0; col < this->vexnum; col++) {
                //Ϊ�˷�ֹ�����������Ҫ����һ��selectֵ
                select = (dis[row][temp] == INT_MAX || dis[temp][col] == INT_MAX) ? INT_MAX : (dis[row][temp] + dis[temp][col]);
                if (this->dis[row][col] > select) {
                    //�������ǵ�D����
                    this->dis[row][col] = select;
                    //�������ǵ�P����
                    this->path[row][col] = this->path[row][temp];
                }
            }
        }
    }
}

void Graph_DG::print_path() {
    cout << "����·���������·����·�ɱ���" << endl;
    int row = 0;
    int col = 0;
    int temp = 0;
    
    for (row = 0; row < this->vexnum; row++) {
        for (col = row + 1; col < this->vexnum; col++) {
            cout << "v" <<  row + 1 << "---" << "v" <<  col+1 << " weight: "
                << this->dis[row][col] << " path: " << " v" <<  row + 1;
            temp = path[row][col];
            //ѭ�����;����ÿ��·����
            while (temp != col) {
                cout << "-->" << "v" <<  temp + 1;
                temp = path[temp][col];
            }
            cout << "-->" << "v" <<  col + 1 << endl;
        }

        cout << endl;
    }
    
    
    ofstream ccout("res.txt");
    
     for (row = 0; row < this->vexnum; row++) {
        for (col = row + 1; col < this->vexnum; col++) {
            ccout << "v" <<  row + 1 << "---" << "v" <<  col+1 << " weight: "
                << this->dis[row][col] << " path: " << " v" <<  row + 1;
            temp = path[row][col];
            //ѭ�����;����ÿ��·����
            while (temp != col) {
                ccout << "-->" << "v" <<  temp + 1;
                temp = path[temp][col];
            }
            ccout << "-->" << "v" <<  col + 1 << endl;
        }

        ccout << endl;
    }
    
    
}
    
bool check(int Vexnum, int edge) {
    if (Vexnum <= 0 || edge <= 0 || ((Vexnum*(Vexnum - 1)) / 2) < edge)
        return false;
    return true;
}
int main() {
    int vexnum; int edge;
    //printf("��������:\n7 12 \n1 2 12 \n1 6 16 \n1 7 14 \n2 3 10 \n2 6 7 \n3 4 3 \n3 5 5 \n3 6 6 \n4 5 4 \n5 6 2 \n5 7 8 \n6 7 9\n");
   /*
    cout << "������������ͼ�����ࣺ1����SCģʽ��2����P2Pģʽ" << endl;
    int kind;
    cin >> kind;
    //�ж������kind�Ƿ�Ϸ�
    while (1) {
        if (kind == 1 || kind == 2) {
            break;
        }
        else {
            cout << "���������ṹ�����Ų��Ϸ������������룺1����SCģʽ��2����P2Pģʽ" << endl;
            cin >> kind;
        }
    }
    */
    ifstream fin("main.txt");
   
    int kind=2;
    //cout << "������������ͼ�еĶ�������ͱߵ�������" << endl;
    //cin >> vexnum >> edge;
    fin>>vexnum >> edge;
    while (!check(vexnum, edge)) {
        cout << "�������ֵ���Ϸ�������������" << endl;
        //cin >> vexnum >> edge;
    }
    fin.close();
    Graph_DG graph(vexnum, edge);
    graph.createGraph(kind);
    
    
    
    
    
    graph.print();
    graph.Floyd();
    graph.print_path();
    system("pause");
    return 0;
}

