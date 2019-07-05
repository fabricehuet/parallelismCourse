int main(int argc, char* argv[]) {

     if (argc<2) {
       return -1;
     }
     int size = atoi(argv[1]);
  	int res = 0;
  	#pragma omp parallel for
  	for(int i = 0; i < size; i++){
  		res += i+i;
  	}
    printf("res=%d\n",res);

}
