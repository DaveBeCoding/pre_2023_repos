#include "source.h"

#include <iostream>
#include <mlpack/core.hpp>
#include <mlpack/methods/neighbor_search/neighbor_search.hpp>

using namespace mlpack;

// NeighborSearch and NearestNeighborSort
using namespace mlpack::neighbor;

//∑i|ai−bi| .... Distance between two Vectors/points
using namespace mlpack::metric; //Manhattandistance = abs(x1−x2)+abs(y1−y2) <---- Two-Dimensional plane

ML_Example::ML_Example(/* args */)
{
    /* initialization*/
}

ML_Example::~ML_Example()
{
    /*deinitialization*/
}

void ML_Example::ML_Module()
{
    arma::mat data;

    data::Load("example.csv", data, true);

    NeighborSearch<NearestNeighborSort, ManhattanDistance> nn(data);

    arma::Mat<size_t> neighbors; // Matrices to hold
    arma::mat distances;         // the results

    nn.Search(1, neighbors, distances); //find the nearest neighbor
    
    std::cout <<"\n";
    // Print out each neighbor and its distance.
    for (size_t i = 0; i < neighbors.n_elem; ++i)
    {
        std::cout << "Nearest neighbor of point " << i << " is point "
                  << neighbors[i] << " and the distance is "
                  << distances[i] << ".\n";
    }
    std::cout << std::endl; //flush out-put buffer
}
