#ifndef NEURON_H_INCLUDED
#define NEURON_H_INCLUDED

int and_neuron(float *inputN, float weight, int arraySize){
     int i=0;
     float sum = 0.0;
     for(i=0;i < arraySize ; i++){
         sum = sum + inputN[i] * weight;
     }
     float threshold = weight * arraySize;
     return (sum >= threshold);
}

int or_neuron(float *inputN, float weight, int arraySize){
    int i=0;
    float sum =0.0;
    for(i=0;i < arraySize; i++){
        sum += inputN[i] * weight;
    }
    return (sum >= weight);
}

void not_neuron(float *inputN, float weight, int arraySize){
    int i=0;
    for(i=0; i < arraySize;i++){
        inputN[i] = ((inputN[i] * weight) < weight);
    }
}

#endif