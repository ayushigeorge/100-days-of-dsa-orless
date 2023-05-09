void StackQueue :: push(int x)
{
    s2.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        if(s1.empty())
        {
            if(s2.empty())
            {
                return -1;
            }
            else 
            {
                while(!s2.empty())
                {
                    s1.push(s2.top());
                    s2.pop();
                }
                int x = s1.top();
                s1.pop();
                return x;
            }
        }
        else 
        {
            int x = s1.top();
            s1.pop();
            return x;
        }
}
