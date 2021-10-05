class UndergroundSystem {
    unordered_map<int, pair<string, int> >checkIns;        
    unordered_map<string, pair<int, int> >routeTimings;    
public:
    UndergroundSystem() {  }
    
    void checkIn(int id, string stationName, int t) {
        checkIns[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        string startToEnd = checkIns[id].first + '-' + stationName; 
        routeTimings[startToEnd] = {routeTimings[startToEnd].first + (t - checkIns[id].second), routeTimings[startToEnd].second + 1};
        checkIns.erase(id); 
    }
    
    double getAverageTime(string startStation, string endStation) {
        pair<int, int> p = routeTimings[startStation + '-' + endStation];
        return (double)p.first / p.second;
    }
};
