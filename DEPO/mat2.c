#include <stdio.h>
struct Lineer{
	int satir;
	int sutun;
	int array[satir][sutun];
};
struct Lineer Transpoz(struct Lineer L){
	struct Lineer newL{L.sutun,L.satir,L.array[sutun][satir]};
	return newL;
}

int main(){
	struct Lineer Li{5,6,a[][]};
	
	
	
	return 0;
}