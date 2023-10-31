// #include<bits/stdc++.h>
// using namespace std;

// void printArray(int arr[],int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void printChArray(char arr_ch[]){
//     int size = sizeof(arr_ch) / sizeof(char);
//     cout<<size<<endl;

//     cout<<sizeof(arr_ch)<<sizeof(char)<<endl;
//     for(int i=0; i<size;i++){
//         cout<<arr_ch[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     // int arr[n];
//     // cout<<"Enter n elements one by one ";
//     // for(int i=0; i<n; i++){
//     //     cin>>arr[i];
//     // }
//     // printArray(arr,n);

//     // cout<<"Size of the array is "<<(sizeof(arr)/sizeof(int))<<endl; 

//     char arr_ch[n];
//     for(int i=0; i<n; i++){
//         cin>>arr_ch[i];
//     }

//     printChArray(arr_ch);



//     // Ghatiya practice a
//     // int arr[size] --> size se pehle hi array define kr dena ye good practice nahi hai aisa bolta hai love babbar bhaiya


//     return 0;
// }



// repractice
// #include<bits/stdc++.h>
// using namespace std;

// void print_char_array(char* arr,int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i];
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     char arr_ch[100];
//     for(int i=0; i<n; i++){
//         cin>>arr_ch[i];
//     }

//     print_char_array(arr_ch,n);
//     return 0;
// }


// repractice char arrays

#include<bits/stdc++.h>
using namespace std;

void print_char_arr(char* arr){
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i];
        i++;
    }
}

int main(){
    char char_arr[100];
    string i_str;
    cin.getline(char_arr,20);
    // getline(cin,char_arr) // me string ka use kr lunga toh vo input le lega but char_arr ke saath nahi lega since buffer overflow ki problme hai iske liye mujhe char_arr ka size bhi explicitly mention krna pdega
    // getline(cin,i_str) 

    cout<<char_arr<<endl; // in case of char array it prints the whole sequence just by referencing the name of character array 
    // print_char_arr(char_arr);
    // both works exactly same internally as well as externally

    return 0;
}