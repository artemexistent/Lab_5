#include "Header.h"

void Demo(){

    srand(time(0));
    int n=5;
    cout << "New Graph size:" << n << endl;
    Graph_1 a_1(n);
    Graph_2 a_2(n);
    Sleep(3000);
    int m=5;
    cout << "Add Ribs:" << m;
    cout << endl;
    cout << "1 3 2\n1 2 10\n2 5 7\n2 3 3\n4 5 2\n\n";
    a_1.add_edge(1,3,2,2);a_1.add_edge(1,2,10,2);a_1.add_edge(2,5,7,2);a_1.add_edge(2,3,3,2);a_1.add_edge(4,5,2,2);
    cout << "1 2 10\n1 3 2\n3 4 3\n3 5 2\n4 5 8\n";
    a_2.add_edge(1,3,2,2);a_2.add_edge(1,2,10,2);a_2.add_edge(3,5,2,2);a_2.add_edge(4,3,3,2);a_2.add_edge(4,5,8,2);
    Sleep(3000);
    cout << "Write Graph:\n";
    a_1.write_matrix();
    Sleep(3000);
    cout << endl;
    a_2.write_List();
    Sleep(3000);
    system ("cls");
    cout << "Connectivity components and Graph traversal 1\n";
    Components(a_1,a_2,1,1);
    cout << endl;
    Components(a_1,a_2,2,1);
    Sleep(3000);
    system ("cls");
    cout << "Graph traversal 2\n";
    Components(a_1,a_2,1,2);
    cout << endl;
    Components(a_1,a_2,2,2);
    Sleep(3000);
    system ("cls");
    cout << "Decstra\n";
    Decstra(a_1,a_2,1,1);
    cout << endl;
    Decstra(a_1,a_2,2,1);
    Sleep(3000);
    system ("cls");
    cout << "Topological\n";
    Topoligical(a_1,a_2,1);
    cout << endl;
    Topoligical(a_1,a_2,2);
    Sleep(3000);
    system ("cls");
    cout << "Tree\n";
    Tree(a_1,a_2,1,1);
    cout << endl;
    Tree(a_1,a_2,2,1);
    Sleep(3000);
    system ("cls");
    cout << "min Tree:\n";
    minTree(a_1,a_2,1);
    minTree(a_1,a_2,2);
    system("pause");

}
