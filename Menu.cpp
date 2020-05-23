#include "Header.h"



int menu() {
    int key = 0;
    int code;
    do {
        system( "cls" );
        key = ( key + 4 ) % 4;
        if ( key == 0 ) cout<<"-> create_graph_1"<<endl;
            else  cout<<"   create_graph_1"<<endl;
        if ( key == 1 ) cout<<"-> create_graph_2"<<endl;
            else  cout<<"   create_graph_2"<<endl;
        if ( key == 2 ) cout<<"-> Demonstration"<<endl;
            else  cout<<"   Demonstration"<<endl;
        if ( key == 3 ) cout<<"-> Benchmark"<<endl;
            else  cout<<"   Benchmark"<<endl;
        code = _getch();
        if ( code == 224 ){
            code = _getch();
            if ( code == 80 ) key ++;
            if ( code == 72 ) key --;
        }
        if ( code == 27 ){
            system( "cls" );
            exit(0);
        }
    }while( code != 13 );
    system( "cls" );
    return key;
}


int menu_2() {
    int key = 0;
    int code;
    do {
        system( "cls" );
        key = ( key + 2 ) % 2;
        cout << "Type:\n";
        if ( key == 0 ) cout<<"-> oriented"<<endl;
            else  cout<<"   oriented"<<endl;
        if ( key == 1 ) cout<<"-> non-oriented"<<endl;
            else  cout<<"   non-oriented"<<endl;
        code = _getch();
        if ( code == 224 ){
            code = _getch();
            if ( code == 80 ) key ++;
            if ( code == 72 ) key --;
        }
        if ( code == 27 ){
            system( "cls" );
            exit(0);
        }
    }while( code != 13 );
    system( "cls" );
    return key+1;
}



int menu_3() {
    int key = 0;
    int code;
    do {
        system( "cls" );
        key = ( key + 9 ) % 9;
        if ( key == 0 ) cout<<"-> Write Graph"<<endl;
            else  cout<<"   Write Graph"<<endl;
        if ( key == 1 ) cout<<"-> Connectivity components"<<endl;
            else  cout<<"   Connectivity components"<<endl;
        if ( key == 2 ) cout<<"-> Graph traversal 1"<<endl;
            else  cout<<"   Graph traversal 1"<<endl;
        if ( key == 3 ) cout<<"-> Graph traversal 2"<<endl;
            else  cout<<"   Graph traversal 2"<<endl;
        if ( key == 4 ) cout<<"-> Decstra"<<endl;
            else  cout<<"   Decstra"<<endl;
        if ( key == 5 ) cout<<"-> Topological"<<endl;
            else  cout<<"   Topological"<<endl;
        if ( key == 6 ) cout<<"-> Tree"<<endl;
            else  cout<<"   Tree"<<endl;
        if ( key == 7 ) cout<<"-> min Tree"<<endl;
            else  cout<<"   min Tree"<<endl;
        if ( key == 8 ) cout<<"-> Back"<<endl;
            else  cout<<"   Back"<<endl;
        code = _getch();
        if ( code == 224 ){
            code = _getch();
            if ( code == 80 ) key ++;
            if ( code == 72 ) key --;
        }
        if ( code == 27 ){
            system( "cls" );
            exit(0);
        }
    }while( code != 13 );
    system( "cls" );
    return key;
}


int menu_4() {
    int key = 0;
    int code;
    do {
        system( "cls" );
        key = ( key + 4 ) % 4;
        if ( key == 0 ) cout<<"-> between two points"<<endl;
            else  cout<<"   between two points"<<endl;
        if ( key == 1 ) cout<<"-> from one to all points"<<endl;
            else  cout<<"   from one to all points"<<endl;
        if ( key == 2 ) cout<<"-> between all points"<<endl;
            else  cout<<"   between all points"<<endl;
        if ( key == 3 ) cout<<"-> Back"<<endl;
            else  cout<<"   Back"<<endl;
        code = _getch();
        if ( code == 224 ){
            code = _getch();
            if ( code == 80 ) key ++;
            if ( code == 72 ) key --;
        }
        if ( code == 27 ){
            system( "cls" );
            exit(0);
        }
    }while( code != 13 );
    system( "cls" );
    return key;
}


int menu_5() {
    int key = 0;
    int code;
    do {
        system( "cls" );
        key = ( key + 2 ) % 2;
        cout << "Type:\n";
        if ( key == 0 ) cout<<"-> type_1"<<endl;
            else  cout<<"   type_1"<<endl;
        if ( key == 1 ) cout<<"-> type_2"<<endl;
            else  cout<<"   type_2"<<endl;
        code = _getch();
        if ( code == 224 ){
            code = _getch();
            if ( code == 80 ) key ++;
            if ( code == 72 ) key --;
        }
        if ( code == 27 ){
            system( "cls" );
            exit(0);
        }
    }while( code != 13 );
    system( "cls" );
    return key+1;
}
