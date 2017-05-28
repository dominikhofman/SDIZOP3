#pragma once
#include <vector>
#include "Graph.h"

class TSP
{
public:
	TSP();
	~TSP();

	static std::vector<int> fullCheckAlgorithm();
	static std::vector<int> greedyAlgorithm(const Graph& graph, int start_v);
};

