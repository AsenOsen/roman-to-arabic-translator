int fromRoman(string &arabic)
{
    map<char,int> r_to_a;
    r_to_a['I'] = 1;
    r_to_a['V'] = 5;
    r_to_a['X'] = 10;
    r_to_a['L'] = 50;
    r_to_a['C'] = 100;
    r_to_a['D'] = 500;
    r_to_a['M'] = 1000;

    int sum = 0;
    char tmp = 0;
    for(string::reverse_iterator itr=arabic.rbegin(); itr!=arabic.rend(); ++itr)
    {
        if(r_to_a[*itr]<r_to_a[tmp]) sum-=r_to_a[*itr]; else sum+=r_to_a[*itr];
        tmp = *itr;
    }

    return sum;

}


//  Now lets test the translator-function above 
int main()
{
    string roman_digit = "MMMCMXCIX";
    cout<<fromRoman(roman_digit)<<endl;
}
