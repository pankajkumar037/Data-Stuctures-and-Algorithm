void gp(string ans,int n){
    if(ans.length()==n){
        if(validp(ans)==true){
            cout<<ans<<endl;
        }
        return;
    }

    
    gp(ans+'(',n);
   
    if(ans.size()>0){
        gp(ans+')',n);
    }
    

}

int main(){
    int n;
    cin>>n;
    gp("",2*n);
}