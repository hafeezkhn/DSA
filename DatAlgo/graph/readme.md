--nonLinear Data Structure

-----------------------------------------------------
  Graphs 
-----------------------------------------------------
   -> Friendship Relatioship
   -> random connection amongst the nodes
   -> represented as pair of sets G=(V,E)
      Eg;
            (v1)------------(v3)
             |               | \
             |               |  \
             |               |  (v5)
             |               |  /
             |               | /
            (v2)------------(v4)
       1. vertices V = {v1,v2,v3,v4,v5}
       2. edges    E = {(v1,v2),(v1,v3),(v2,v4)
                        (v3,v4),(v3,v5),(v4,v5)}
   
  -> Directed               | Undirected graphs
    * edges have directions |* Eg: social network  
    * orederd pair (v1,v2)  |  if v1 is friend of v2
    * can only go in one    |  it means v2 is also
      direction             |  friend of v1.
    * Eg: webpage have v1   |* 
      link to v2,           |
      crawler also use this |
