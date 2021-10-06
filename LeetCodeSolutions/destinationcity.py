class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        outgoing_count={}
        for path in paths:
            citya,cityb=path
            outgoing_count[citya]=outgoing_count.get(citya,0)+1
            outgoing_count[cityb]=outgoing_count.get(cityb,0)
            
        for city in outgoing_count:
            if outgoing_count[city]==0:
                return city

            
        
