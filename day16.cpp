/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   vecotr<int> res;
   while(!s.empty()){
       res.push_back(s.top());
       s.pop();
   }
   std::sort(res.begin(), res.end());
   for(int num: res){
       s.push(num);
   }
}
