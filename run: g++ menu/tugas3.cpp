#include <iostream>
using namespace std;
int main() {
    string ulang,menu[5]={"soto","rawon","pecel","teh","kopi"};
    int Harga[5]={15000,20000,10000,3000,5000};
    int Porsi[5];
    int total[5];
    int i;
    int grandtotal=0;
    do {
     for(i=0;i<5;i++)
        {
            cout<<"Menu: ";
            cout<<menu[i]<<endl;
            cout<<"Harga: ";
            cout<<Harga[i]<<endl;
            cout<<"Porsi: ";
            cin>>Porsi[i];
            total[i]=Porsi[i]*Harga[i];
            cout<<"Total: ";
            cout<<total[i]<<endl;
            cout<<"____________________________________"<<endl;
            grandtotal=grandtotal+total[i];
        }
    cout<<"------------------------------------"<<endl;
    cout<<"TOTAL PESANAN ADALAH: ";
    cout<<grandtotal<<endl;
    cout<<"------------------------------------"<<endl;
    }
        while (ulang=="y"||ulang=="Y");
    system("pause");
    
    return 0;
}
