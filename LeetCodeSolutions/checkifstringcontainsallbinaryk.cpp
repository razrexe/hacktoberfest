class Solution {
public:
    bool hasAllCodes(string s, int k) {
        string str="";
        for(int i=0;i<k;i++)
        {
            str+=s[i];
        }
        int mx=pow(2,k);
        int arr[mx];
        memset(arr,0,sizeof(arr));
        arr[stoi(str,nullptr,2)]=1;
        for(int i=k;i<s.size();i++)
        {
            str=str.substr(1,k-1);
            str+=s[i];
            arr[stoi(str,nullptr,2)]=1;
        }
        for(int i=0;i<mx;i++)
        {
            if(arr[i]==0)
            {
                return false;
            }
        }
        return true;
    }
};
