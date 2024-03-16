#include "source.cpp"

int main()
{
    ML_Example TestMachine;
    TestMachine.ML_Module();
    return 0;
}

/*
ABOUT THE ALGORITHM:

The K-nearest neighbors (KNN) algorithm is a type of supervised machine learning algorithm. 
KNN is extremely easy to implement in its most basic form, and yet performs quite complex classification tasks. 
It is a lazy learning algorithm since it doesn't have a specialized training phase. Rather, 
it uses all of the data for training while classifying a new data point or instance. 
KNN is a non-parametric learning algorithm, which means that it doesn't assume anything about the underlying data. 
This is an extremely useful feature since most of the real world data doesn't really follow any theoretical assumption e.g. 
linear-separability, uniform distribution, etc.

More information on the algorithm can be found here: https://stackabuse.com/k-nearest-neighbors-algorithm-in-python-and-scikit-learn/
*/