#include <stdio.h>

void chu_vi (d, r){
	int chuvi;
	chuvi = (d + r) * 2;
	printf("\n chu vi hcn la : %d ",chuvi);
}

void dien_tich(d, r){
	int dientich;
	dientich = d * r;
	printf("\n dien tich hcn la : %d",dientich);
}
int main (){
	int d, r;
	printf("\n Nhap chieu dai hcn : ");
	scanf("%d",&d);
	printf("\n Nhap chieu rong hcn : ");
	scanf("%d",&r);
	chu_vi(d,r);
	dien_tich(d,r);
	

}
