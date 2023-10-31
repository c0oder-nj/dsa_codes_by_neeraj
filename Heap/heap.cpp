#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
        int size;
        int arr[100];
        int index;
        int parent;

    heap(){
        arr[0] = -1;
        size =0;
        index=0;
    }

    void insert(int val){
        size = size+1;
        index = size;
        arr[index] = val;

        // check if it voids max heap property or not
        while(index>1){
            parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent/2;
            }
            else{
                return;
            }
        }
    }

    void deletion(){
        if(size<=0){
            cout<<"Heap is empty to delete"<<endl;
            return;
        }

        // step 1 -> replace root with last element
        swap(arr[1],arr[size]);
        
        // step 2 --> delete size
        arr[size] = -1;
        size--;

        // set root to its correct position
        int rootIndex = 1;
        while(rootIndex<size){
            int leftIndex = 2*rootIndex;
            int rightIndex = 2*rootIndex + 1;

            int largest;
            if(leftIndex<size && rightIndex<size){
                largest = arr[leftIndex]>arr[rightIndex]?leftIndex:rightIndex;
                swap(arr[rootIndex],arr[largest]);
                rootIndex = largest;
            }else{
                return;
            }
        }
    }

   

    void print(){
        // size shows number of elements present in heap
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


};

 // hepify --> heap ke andr kisi bhi node ko uski right place par le kar jaana
    void heapify(int *arr,int size, int i){ // arr - arr ka size (no. of ele) - element index jisko right place par lagana hai 
        
        int largest = i; // jis element ko uski right place par le jaana hai use hi start me largest mana
        int left= 2*i; // us element i ke left element ki index
        int right= 2*i+1; // us element i ke right element ki index

        if(left<=size && arr[largest]<arr[left]){
            largest = left;
        }

        if(right<=size && arr[largest]<arr[right]){
            largest = right;
        }

        // check if largest element change hua ya nahi 
        // agr change nahi hua means apna jo element i tha vo uski right place par hi rkha hua hai so no swapping
        // else
        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,size,largest);
        }
        else{
            return;
        }

    }

    void heapSort(int *arr,int size){
        while(size>1){
            // step 1 -> swap
            swap(arr[1],arr[size]);

            // step 2
            size--;

            // step 3 
            heapify(arr,size,1);
        }
    }

int main(){

    heap h;
    h.insert(60);
    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(20);
    h.insert(55);

    // h.print();
    // h.deletion();
    // h.print();

    // checking heapify
    int arr[6] = {-1, 70, 60, 55, 45, 50};
    int n=5;
    for(int i=n/2; i>0; i--){
        heapify(arr,n,i);
    }

    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    heapSort(arr,n); // time complexity O(nlogn) --> n for creation and logn for sorting

    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}