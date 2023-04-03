//File Handling
// 1. Write a C++ program to create a file and print “File created successfully” and throw an 
// error if file is not created.
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ofstreain;
//     fout.open("c:/file/Ques1.txt");
//     if (!fout)
//     {
//         cout<<"Error File can not created."<<endl;
//     }
//     else
//     {
//         cout<<"File created successfully."<<endl;
//     }
//     return 0;
// }

// // 2. Write a C++ program to read a text file and count the number of characters in it.
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ifstream fin;
//     int count = 0;
//     fin.open("c:/file/Ques2.txt",ios::in);
//     char ch;
//     while (!fin.eof())
//     {
//         fin >> ch;
//         count++;
//     }
//     cout<<"count = "<<count-1;
//     return 0;
// }

// 3. Write a C++ program to open an output file 'a.txt' and append data to it.
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ofstream fout;
//     fout.open("c:/file/a.txt",ios::app);
//     if (!fout)
//     {
//         cout<<"File cannot created"<<endl;
//     }
//     else
//     {
//         cout<<"File Created Successfully."<<endl;
//         fout<<"Hello";
//     }
//     return 0;
// }

// 4. Write a program to copy the contents of one text file to another while changing the case 
// of every alphabet.
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     ofstream fout;
//     ifstream fin;
//     ofstream dout;
//     fin.open("c:/file/one.txt");
//     dout.open("c:/file/two.txt");
//     if (!fout && !fin)
//     {
//         cout<<"Error File can not created."<<endl;
//     }
//     else
//     {
//         cout<<"File created successfully."<<endl;
//         fout<<"Hello";
//     }
//     char ch;
//     while (!fout.eof())
//     {
//         fin.get(ch);
//         if (ch>=97 && ch<=122)
//         {
//             ch = toupper(ch);
//         }
//         else if(ch>=65 && ch<=90)
//         {
//             ch = toupper(ch);
//         }
//         dout<<ch;
//     }
    
//     return 0;
// }

// 5. Write a C++ program to merge the two files
// #include <iostream>
// #include <fstream>
// #include <stdlib.h>
// using namespace std;
// int main()
// {
//     ifstream fin1,fin2;
//     ofstream fout;
//     fin1.open("c:/file/first.txt");
//     fin2.open("c:/file/second.txt");
//     if (!fin1 || ! fin2)
//     {
//         cout<<"\nInvalid file Name. \n There is no such file or Directory...";
//         exit(0);
//     }
//     fout.open("c:/file/merge.txt");
//     if (!fout)
//     {
//         cout<<"\nInvalid file Name. \n There is no such file or Directory...";
//         exit(0);
//     }
//     while (fin1.eof()==0)
//     {
//         getline(fin1,ch);
//         fout<<ch;
//     }
//     while (fin2.eof()==0)
//     {
//         getline(fin2,ch);
//         fout<<ch;
//     }    
//     cout<<"\n Two file have been Merged into "<<file_name3<<" file successfully...!!";
//     fin1.close();
//     fin2.close();
//     fout.close();
//     return 0;
// }