class Solution {
    public int[] findMissingAndRepeatedValues(int[][] g) {
        int r=g.length;
        int t=r*r;
        int [] o=new int[2];
        HashMap<Integer,Integer> k= new HashMap();
        int su=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
           k.put(g[i][j],k.getOrDefault(g[i][j],0)+1);
           su+=g[i][j];
        }
    }
    int s=t*(t+1)/2;
    int l=0;
    for (int key : k.keySet()) {
    if (k.get(key) == 2) {
        l=key;
    }
}
o[0]=l;
o[1]=s-(su-l);
return o;
    }
}