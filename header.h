#ifndef header_h
#define header_h

 int *CriaVetInt(int tam){
    int *Vet;

    Vet = (int*)malloc(tam*sizeof(int));
    return Vet;

 }

float *CriaVetFloat(int tam){
    float *Vet;

    Vet = (float*)malloc(tam*sizeof(float));
    return Vet;

}

 #endif // header_h
