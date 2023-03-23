class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int result=100000,index=-1;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x ||points[i][1]==y)
            {
                
                if(result>abs(points[i][0]-x)+ abs(points[i][1]-y))
                {
                    result=abs(points[i][0]-x)+ abs(points[i][1]-y);
                    index=i;
                }
            }
            
        }
        return index;
    }
};