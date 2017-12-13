#include<iostream>  
  #include<iomanip>  
 #include<conio.h>  
 #include<windows.h>  
 #define xmap 17  
  #define ymap 37  
 using namespace std;  
string setcolor(unsigned short color){  
 HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
 SetConsoleTextAttribute(hcon, color);  
 return "";  
  }  
 void gotoxy(int x, int y) //Void untuk gotoxy,  
 {  
   COORD pos = {x, y};  
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);  
  }  
  int main()  
  {  
   system("title WATCH YOUR STEP");  
   int score=0;  
   int x,y,posisix,posisiy,batas;  
   string nama;  
   char input;  
   char *org[4];  
   batas=0;  
  *org="> ";  
   system ("color 7");  
   int map[xmap][ymap]= //layer map  
   // 0 = batas 1 = pager 2 = palyer 3 = jalan 4 = bom 5 = finish  
   {  
     1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,  
     1,2,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,3,3,3,3,4,1,  
     1,3,3,1,1,3,3,3,3,4,3,3,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,1,3,1,1,3,4,3,3,1,  
  1,3,1,1,1,3,1,3,3,4,3,4,3,3,1,1,3,4,4,3,1,1,1,1,1,1,1,1,1,3,1,1,3,3,3,3,1,  
   1,3,1,1,1,3,1,3,3,3,3,4,3,3,1,1,3,3,4,3,1,1,1,1,1,1,1,1,1,3,1,1,1,3,3,3,1,  
     1,3,1,1,1,3,1,3,1,1,1,1,3,1,1,1,1,3,1,3,1,1,1,1,1,1,1,1,1,3,1,1,1,3,1,3,1,  
    1,3,1,1,1,3,1,3,1,1,1,1,3,1,1,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,1,3,1,3,1,  
    1,3,1,1,1,3,1,3,1,1,3,3,3,3,3,4,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,3,1,3,1,  
    1,3,1,1,1,3,1,3,1,1,3,1,1,4,3,4,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,3,1,  
    1,3,1,1,1,3,1,3,1,1,3,1,1,1,3,3,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,3,3,3,1,  
   1,3,1,1,1,3,1,3,1,1,3,3,3,3,3,3,3,3,1,1,9,1,9,9,9,1,1,3,3,3,3,3,1,3,4,1,1,  
    1,3,1,1,1,3,1,3,1,1,1,1,1,1,1,1,1,3,1,1,9,1,1,1,9,1,1,3,1,1,1,1,1,3,3,3,1,  
    1,3,3,3,3,3,1,3,1,1,1,1,1,1,1,1,1,3,1,1,9,1,9,9,9,1,1,3,1,1,1,1,1,4,4,3,1,  
    1,3,3,4,3,3,1,3,3,3,3,3,3,3,3,3,3,3,1,1,9,1,9,1,1,1,1,3,1,1,1,1,1,3,3,3,1,  
    1,3,3,4,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,1,9,9,9,1,1,3,1,1,1,1,1,3,4,1,1,  
     1,3,3,3,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,3,5,  
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,  
 };  
  pertama:  
 setcolor(10);cout<<"========================================================================="<<endl;  
  setcolor(11);cout<<setw(43)<<"= WATCH YOUR STEP ="<<endl;  
  setcolor(11);cout<<setw(44)<<"= ILHAM RISKI WIBOWO ="<<endl;  
  setcolor(10);cout<<"========================================================================="<<endl;  
  setcolor(11);cout<<"Selamat datang di game pertama saya mengunakan C++"<<endl;  
  setcolor(15);cout<<"Masukan Nama: ";  
 cin>>nama;  
 system("cls");  
  goto mulai;  
  mulai:  
  while(1){  
  setcolor(10);cout<<"========================================================================="<<endl;  
  for (x=0;x<xmap;x++){    //Pagar  
    for (y=0;y<ymap;y++){      
    if (map[x][y]==1){  
     if (x==0){  
    setcolor(7);  
   cout<<"| ";  
      }  
     else if (x==xmap-1){  
     setcolor(7);  
     cout<<"| ";  
      }  
      else {  
     setcolor(7);  
      cout<<"| ";}  
     }  
   else if (map[x][y]==2){  
      setcolor(10);  
      cout<<*org;  
     posisix=x;  
     posisiy=y;  
    }  
   else if (map[x][y]==4){   //bom  
     setcolor(12);  
      cout<<"X ";  
    }  
   else if (map[x][y]==3){  
     setcolor(15);  
     cout<<" ";  
    }  
   else if (map[x][y]==5){   //Target  
     setcolor(9);  
     cout<<"F ";  
    }  
    else if (map[x][y]==9){  
     setcolor(43);  
     cout<<"# ";  
 }  
 else {  
      setcolor(9);  
     cout<<" ";}  
    }  
    setcolor(15);  
  cout<<" "<<endl;  
  }  
   setcolor(10); cout<<"==================================RULE===================================\n";    //Petunjuk  
   setcolor(11); cout<<"Tekan \"W\" \"A\" \"S\" \"D\" untuk mengerakan caracter\n";  
   setcolor(11); cout<<"Pergilah ke garis finis tanpa harus terkena";  
   setcolor(12); cout<<" bomb ";  
  setcolor(11); cout<<"dengan melalu jalan terdekat"<<endl;  
  setcolor(11); cout<<"Score dihitung setiap anda melangkah, score terkecil dialah pemenangnya."<<endl;  
   cout<<endl;  
 setcolor(14); cout<<"Player name is ";  
   setcolor(15); cout<<nama<<endl;  
   setcolor(14); cout<<"Your score is ";  
  setcolor(15); cout<<score;  
 setcolor(7);  
   input=getch();  
  if(input=='s'){  
   if (map[posisix+1][posisiy]==2 || map[posisix+1][posisiy]==3){  
   map[posisix][posisiy]=3;  
    map[posisix+1][posisiy]=2;  
    score++;  
   *org="V ";  
   }  
   else if (map[posisix+1][posisiy]==4)  
   {  
   }  
   }  
  else if(input=='d'){  
    if (map[posisix][posisiy+1]==2 || map[posisix][posisiy+1]==3){  
    map[posisix][posisiy]=3;  
    map[posisix][posisiy+1]=2;  
    score++;  
   *org="> ";  
    }  
   else if (map[posisix][posisiy+1]==3)  
    {  
  cout<<" ";  
    }  
    else if (map[posisix][posisiy+1]==4)  
  {  
    goto gameover;  
   }  
   else if (map[posisix][posisiy+1]==5)  
   {  
   goto win;  
    }  
    }  
  else if(input=='a'){  
    if (map[posisix][posisiy-1]==2 || map[posisix][posisiy-1]==3){  
   map[posisix][posisiy]=3;  
    map[posisix][posisiy-1]=2;  
    score++;  
    *org="< ";  
   }  
    else if (map[posisix][posisiy-1]==3)  
    {  
   cout<<" ";  
    }  
    else if (map[posisix][posisiy-1]==4)  
    {  
    goto gameover;  
    }  
    else if (map[posisix][posisiy-1]==5)  
    {  
    goto win;  
   }  
   }  
  else if(input=='w'){  
    if (map[posisix-1][posisiy]==2 || map[posisix-1][posisiy]==3){  
    map[posisix][posisiy]=3;  
    map[posisix-1][posisiy]=2;  
    score++;  
    *org="^ ";  
    }  
   else if (map[posisix-1][posisiy]==3)  
    {  
  cout<<" ";  
  }   
    else if (map[posisix-1][posisiy]==4)  
    {  
    goto gameover;  
    }  
   else if (map[posisix-1][posisiy]==5)  
   {  
   goto win;  
    }  
    } system("cls");  
  }  
   gameover:  
   system("cls");  
  setcolor(12);  
   cout<<"===============================\n";  
  cout<<"=     GAME OVER     =\n";  
  cout<<"===============================\n";  
  cout<<"Try again? Y/N";  
 input=getch();  
   if (input=='y'){  
   system("cls");  
   goto pertama;  
}  
  else if (input=='n'){  
 cout <<"\nThanks "<<nama<<endl;  
  cout <<"Your score is "<<score<<endl;  
 system("pause");  
   }  
   else{  
    cout <<"\nPlease"<<endl;  
   system("cls");  
    goto gameover;  
   }  
 win:  
  system("cls");  
  setcolor(11);  
   cout<<"*******************************\n";  
   cout<<"*      FINISH      *\n";  
 cout<<"*******************************\n";  
  cout<<"Try again? Y/N";  
  input=getch();  
  if (input=='y'){  
   system("cls");  
  goto pertama;  
}  
 else if (input=='n'){  
 cout <<"\nThanks "<<nama<<endl;  
cout <<"Your score is "<<score<<endl;  
    system("pause");  
}  
   else{  
    cout <<"\nPlease"<<endl;  
    system("cls");  
    goto win;  
   }  
  }  
