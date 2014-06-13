#ifndef SORT_H
#define SORT_H 
Sort__bubbleSort(int x[],int n)
{
	int hold,j,pass,swap=1;
	for(pass=0;pass<n-1&&swap;pass++){
		/*controla o numero de passagens! se não ocorreu troca já esta ordenado, n=tl*/
		swap=0;
		/* (n-pass) a cada passagem um elemento borbulha pro final não precisa mais comparar ele*/
		for(j=0;j<n-pass-1;j++){
			if(x[j]>x[j+1]){
				swap=1;
				hold=x[j];
				x[j]=x[j+1];
				x[j+1]=hold;
			}
		}
	}
}
#endif