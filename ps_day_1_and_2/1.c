 

// #include <stdio.h> 

// int main(){ 

//     int a[5]={1,1,1,1,1}; 

//     int b[5]={4,5,6,5,6}; 

//     int d[10]={0}; 

//     int count=0; 

//     int mark=-1; 

//     for (int  i = 0; i <5; i++) 

//     { 

//         d[i]=a[i]; 

//         count++; 

//     } 

//     for(int i=0;i<5;i++){ 

//         d[i+count]=b[i];       

//     } 

//     for(int i=0;i<10;i++ ){ 

//         for(int j=i+1;j<10;j++){ 

//             if(d[i]==d[j]) 

//             d[i]=mark; 

//         } 

//     } 

//      for(int i=0;i<10;i++){ 

//         if(d[i]>0) 

//         printf("%d ",d[i]); 

//     }     

// }  

// #include <stdio.h> 

 

// int intersection(int n,int arr1[],int m,int arr2[]){  

//     printf("intersection is ");
//     for(int i=0;i<n;i++){ 

//         for(int j=0;j<n;j++){ 

//             if(arr1[i]==arr2[j]){ 

//                 printf("%d ",arr1[i]); 

//             } 

//         } 

//     } 

// }

 

// int main(){ 

//     int n,m; 

//     printf("enter the order of first set: "); 

//     scanf("%d",&n); 

//       int arr1[n]; 

//   printf("enter the elements: "); 

//     for(int i=0;i<n;i++) 

//     scanf("%d",&arr1[i]); 

//   printf("enter the order of second set: "); 

//    scanf("%d",&m); 

//   int arr2[m]; 

//     printf("enter the elements: "); 

//     for(int i=0;i<m;i++) 

//    scanf("%d", &arr2[i]); 

//     intersection(n,arr1,m,arr2); 

// } 


// #include<stdio.h> 


// int main() 

// { 

//     int n,m,i,arr1[50],j,k,arr2[50],c[50],r; 

//     printf("enter the order of first set: "); 

//     scanf("%d",&n); 

//       printf("Enter the elements\n"); 

//     for(i=0;i<n;i++) 

//     { 

//        scanf("%d",&arr1[i]); 

//     } 

//      printf("enter the order of second set: "); 

//     scanf("%d",&m); 

//      printf("Enter the elements\n"); 

//     for(j=0;j<m;j++) 

//     { 

//        scanf("%d",&arr2[j]); 

//     }  

//    printf("Difference :");     

//     for(i=0;i<n;i++) 

//     { 

//         for(j=0;j<m;j++) 

//         { 

//             if(arr1[i]==arr2[j]) 

//             break; 

//         } 

//         if(j==m) 

//         { 

//             printf("%d ",arr1[i]); 

//         } 

//     }                

// } 

#include<stdio.h> 

int main() 

{ 

    int n,m,i,arr1[20],j,k,arr2[20],c[20],r; 

    printf("enter the order of first set: "); 

    scanf("%d",&n); 

      printf("enter the elements\n"); 

    for(i=0;i<n;i++) 

    { 

       scanf("%d",&arr1[i]); 

    } 

   printf("enter the order of second set: "); 

   scanf("%d",&m); 

      printf("enter the elements\n"); 

    for(j=0;j<m;j++) 

    { 

        scanf("%d",&arr2[j]); 

    }  

    printf("difference :");     

    for(i=0;i<n;i++) 

    { 

        for(j=0;j<m;j++) 

        { 

            if(arr1[i]==arr2[j]) 

            break; 

        } 

        if(j==m) 

        { 

            printf("%d ",arr1[i]); 

        } 

    }                

} 