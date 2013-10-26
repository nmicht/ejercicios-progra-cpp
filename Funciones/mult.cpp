int multVector(int arr1[], int arr2[], int tam){
	int acum=0;

	for(int i=0; i < tam; i++)
		acum = acum + arr1[i] * arr2[i];

	return acum;
}
