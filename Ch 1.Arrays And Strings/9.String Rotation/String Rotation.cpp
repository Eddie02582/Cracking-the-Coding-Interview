

bool isRotation( std::string s1, std::string s2 ) {
    if (s1.size() != s2.size())
        return true;
    s1 += s2;    
    
    for(int i = 0;i < s2.size();i++){
        if(s1.substr(i,s2.size()) == s2){
                return true;           
            }
    }
    return false;
}
