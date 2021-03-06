//
// Created by 杨巍 on 5/18/16.
//

#ifndef OCLODE_EFFICIENT_SPECIESNETWORK_H
#define OCLODE_EFFICIENT_SPECIESNETWORK_H

#include <list>
#include <vector>
#include <unordered_map>
#include <string>
#include <cmath> 
#include <stdlib.h>

#define LINELEN 1024

using namespace std;

class SpeciesNetwork
{
/* instances */
private:
    int unique_node;
    const static float edge_weight_threshold = 0.1; // TO DO: make this configurable

public:
    int num_nodes;
    char species_name[LINELEN];
    unordered_map< string, int > geneName_to_uniqId; // (gene_ID, uniq_ID)
    vector< vector<int> > node_adjList; // adjacency list to store edges for each node
    // unordered_map< int, string > uniqId_to_geneName; // (uniq_ID, gene_ID)
    // double **network; // coexpress network of a species

/* methods */
public:
    SpeciesNetwork();
    SpeciesNetwork(char* network_file);
    ~SpeciesNetwork();
    bool is_edge(int i, int j);

private:
    // double get_edge_weight(int i, int j);
    void hash_gene_id(string &gene_ID, char *network_file);

};


#endif //OCLODE_EFFICIENT_SPECIESNETWORK_H
