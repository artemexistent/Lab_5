#include "Header.h"

void Bench(){
    ofstream out("Bench.txt");
    srand(time(0));
    int n=rand()%50;
    out << "N=" << n << "\n";
    clock_t start,end;
    out << "Type1:\n";
    start = clock();
    Graph_1 a_1(n);
    Graph_2 a_2(n);
    for (int i=1;i<=n;i++){
        a_1.add_edge(rand()%n,rand()%n,rand()%100,2);
    }
    end = clock();
    out << "Add   time:" << ((double)end-start)/((double)CLOCKS_PER_SEC) << "    memory:" << sizeof(Graph_1) << "\n";
    start = clock();
    Components(a_1,a_2,1,1);
    end= clock();
    out << "Connectivity components     time:" << ((double)end-start)/((double)CLOCKS_PER_SEC) << "\n";
    start = clock();
    Components(a_1,a_2,1,2);
    end= clock();
    out << "Graph traversal      time:" << ((double)end-start)/((double)CLOCKS_PER_SEC)  << "\n";
    start = clock();
    Decstra(a_1,a_2,1,1);
    end= clock();
    out << "Decstra     time:" << ((double)end-start)/((double)CLOCKS_PER_SEC)  << "\n";
    start = clock();
    Topoligical(a_1,a_2,1);
    end= clock();
    out << "Topoligical     time:" << ((double)end-start)/((double)CLOCKS_PER_SEC) << "\n";
    start = clock();
    Tree(a_1,a_2,1,1);
    end= clock();
    out << "Tree     time:" << ((double)end-start)/((double)CLOCKS_PER_SEC) << "\n";
    start = clock();
    minTree(a_1,a_2,1);
    end= clock();
    out << "min Tree     time:" << ((double)end-start)/((double)CLOCKS_PER_SEC) << "\n";



    out << "\n\n\n";
    out << "Type2:\n";
    start = clock();
    for (int i=1;i<=n;i++){
        a_2.add_edge(rand()%n,rand()%n,rand()%100,2);
    }
    end = clock();
    out << "Add   time:" << ((double)end-start)/((double)CLOCKS_PER_SEC) << "    memory:" << sizeof(Graph_2) << "\n";
    start = clock();
    Components(a_1,a_2,2,1);
    end= clock();
    out << "Connectivity components     time:" << ((double)end-start)/((double)CLOCKS_PER_SEC) << "\n";
    start = clock();
    Components(a_1,a_2,2,2);
    end= clock();
    out << "Graph traversal      time:" << ((double)end-start)/((double)CLOCKS_PER_SEC)  << "\n";
    start = clock();
    Decstra(a_1,a_2,2,1);
    end= clock();
    out << "Decstra     time:" << ((double)end-start)/((double)CLOCKS_PER_SEC)  << "\n";
    start = clock();
    Topoligical(a_1,a_2,2);
    end= clock();
    out << "Topoligical     time:" << ((double)end-start)/((double)CLOCKS_PER_SEC) << "\n";
    start = clock();
    Tree(a_1,a_2,2,1);
    end= clock();
    out << "Tree     time:" << ((double)end-start)/((double)CLOCKS_PER_SEC) << "\n";
    start = clock();
    minTree(a_1,a_2,2);
    end= clock();
    out << "min Tree     time:" << ((double)end-start)/((double)CLOCKS_PER_SEC) << "\n";


}
