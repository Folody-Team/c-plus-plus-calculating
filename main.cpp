#include <stdio.h>
#include <iostream>
using namespace std;

bool find_index(int a[], int num_elements, int value)
{
	int i;
	for(int i = 0; i < num_elements; i++)
	{
		if(a[i] == value)
		{
			return true;
		}
	}
	return false;
}

void nhap(int a[], int &num_elements)
{
	cout << "\nNhap vao so luong phan tu:  ";
	cin >> num_elements;
	int temp;
	for(int i = 0; i < num_elements; i++)
	{
		cout << "\nNhap phan tu thu " << i << " ";
		cin >> temp;
		if(find_index(a, i, temp) == true)
		{
			cout << "\nGia tri bi trung vui long nhap lai";
			i--;
		}
		else
		{
			a[i] = temp;
		}
	}

}

int binarySearch(int arr[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2; // Tương đương (l+r)/2 nhưng ưu điểm tránh tràn số khi l,r lớn
 
    // Nếu arr[mid] = x, trả về chỉ số và kết thúc.
    if (arr[mid] == x)
      return mid;
 
    // Nếu arr[mid] > x, thực hiện tìm kiếm nửa trái của mảng
    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x);
 
    // Nếu arr[mid] < x, thực hiện tìm kiếm nửa phải của mảng
    return binarySearch(arr, mid + 1, r, x);
  }
 
  // Nếu không tìm thấy
  return -1;
}
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
void tangDan()
{
  int a[100];
  int n;
  printf("\nNhap so luong phan tu n = ");
  do{
      scanf("%d", &n);
      if(n <= 0){
          printf("\nNhap lai n = ");
      }
  }while(n <= 0);
  
  for(int i = 0; i < n; i++){
      printf("\nNhap a[%d] = ",i);
      scanf("%d", &a[i]);
  }
  
  // Sap xep dung thuat toan sap xep chon
  int tg;
  for(int i = 0; i < n - 1; i++){
      for(int j = i + 1; j < n; j++){
          if(a[i] > a[j]){
              // Hoan vi 2 so a[i] va a[j]
              tg = a[i];
              a[i] = a[j];
              a[j] = tg;        
          }
      }
  }
  
  
  printf("\nMang da sap xep la: ");
  for(int i = 0; i < n; i++){
      printf("%5d", a[i]);
  }
}
void giamDan()
{
  int a[100];
  int n;
  printf("\nNhap so luong phan tu n = ");
  do{
      scanf("%d", &n);
      if(n <= 0){
          printf("\nNhap lai n = ");
      }
  }while(n <= 0);
  
  for(int i = 0; i < n; i++){
      printf("\nNhap a[%d] = ",i);
      scanf("%d", &a[i]);
  }
  
  // Sap xep dung thuat toan sap xep chon
  int tg;
  for(int i = 0; i < n - 1; i++){
      for(int j = i + 1; j < n; j++){
          if(a[i] < a[j]){
              // Hoan vi 2 so a[i] va a[j]
              tg = a[i];
              a[i] = a[j];
              a[j] = tg;        
          }
      }
  }
  
  
  printf("\nMang da sap xep la: ");
  for(int i = 0; i < n; i++){
      printf("%5d", a[i]);
  }
}
void tuanTu()
{
  int arr[] = { 2, 5, 4, 10, 40 }; 
  int x = 10; 
  int n = sizeof(arr) / sizeof(arr[0]); 
  int result = search(arr, n, x); 
 (result == -1)? cout<<"Thanh phan khong co trong mang " 
               : cout<<"Thanh phan xuat hien tai chi so " <<result; 
}
void nhiPhan()
{
  int arr[] = {2, 3, 4, 10, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 10;
  int result = binarySearch(arr, 0, n - 1, x);
  if (result == -1){
    printf("%d xuat hien tai chi so %d", x, result);
    }
  else{
    printf("%d xuat hien tai chi so %d", x, result);
    }
}
void nhapLai()
{
  int a[100];
  int n;
  nhap(a, n);
}
int main(){
  int chon;
  while(true){
    printf("\n1. Sap xep tang dan");
    printf("\n2. Sap xep giam dan");
    printf("\n3. Tim kiem tuan tu");
    printf("\n4. Tim kiem nhi phan");
    printf("\n5. Nhap lai gia tri day so");
	  printf("\n6. Chon lai bai toan muon giai");
    printf("\n7. Thoat");
    printf("\nNhap lua chon: ");
    scanf("%d", &chon);
    switch(chon){
      case 1:
        tangDan();
        break;
      case 2:
        giamDan();
        break;
      case 3:
        tuanTu();
        break;
      case 4:
        nhiPhan();
        break;
      case 5:
        nhapLai();
        break;
      case 6:
        continue;
      case 7:
        std::exit(0);
      default:
        printf("\nLua chon khong hop le");
      
    }
      
  }
    
      
}
