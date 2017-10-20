///function:
mergeSort(name_array);
 
 //tipo Data used:
typedef struct data{
      char*some;
      int data;
} DATA;
typedef struct _nodo{
       int key;
       DATA data;
}nodo;
 
///n is kept as global
int n;
 
void merge(nodo*a,nodo*aux,int left,int right,int rightEnd){
  int i,num,temp,leftEnd=right-1;
  temp=left;
  num=rightEnd-left+1;
  while((left<=leftEnd)&&(right<=rightEnd)){
    if(a[left].key<=a[right].key){
       aux[temp++]=a[left++];
    }
    else{
        aux[temp++]=a[right++];
    }
  }
  while(left<=leftEnd){
        aux[temp++]=a[left++];
  }
  while(right<=rightEnd){
        aux[temp++]=a[right++];
  }
  for (i=1;i<=num;i++,rightEnd--){
    a[rightEnd]=aux[rightEnd];
  }
}
void mSort(nodo*a,nodo*aux,int left,int right){
  int center;
  if (left<right){
    center=(left+right)/2;
    mSort(a,aux,left,center);
    mSort(a,aux,center+1,right);
    merge(a,aux,left,center+1,right);
  }
}
void mergeSort(nodo*p){
    nodo*temp=(nodo*)malloc(sizeof(nodo)*n);
    mSort(p,temp,0,n-1);
    free(temp);
}