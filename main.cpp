#include <iostream>
#include <iomanip>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

class Node 
    { // binary tree node
    
      public:
       vector<vector<int>> state;
       int cost = 0;
       int index = 0;
       int depth = 0;
      Node()
      {
          
      }
      
      Node(vector<vector<int>> newState, int c, int i)
      {
           state = newState;
           cost = c;
           index = i;
      }
      
      Node(vector<vector<int>> newState, int c, int i, int d)
      {
           state = newState;
           cost = c;
           index = i;
           depth = d;
      }
    }; 

struct Compare : public binary_function<Node*, Node*, bool>
{
    bool operator()(const Node* lhs, const Node* rhs) const
    {
        return lhs->cost > rhs->cost;
    }
};

bool moveRight(int index, int size)
{
    int checkNum = size - 1;
    for(int i = 0; i < size; i++)
    {
        if(index == checkNum)
        {
            return false;
        }
        checkNum  = checkNum + size;
    }
    return true;
}

bool moveDown(int index, int size)
{
    int checkNum = (size * size) - size;
    for(int i = 0; i < size; i++)
    {
        if(index == checkNum)
        {
            return false;
        }
        checkNum  = checkNum + 1;
    }
    return true;
}

bool moveUp(int index, int size)
{
    int checkNum = 0;
    for(int i = 0; i < size; i++)
    {
        if(index == checkNum)
        {
            return false;
        }
        checkNum  = checkNum + 1;
    }
    return true;
}

bool moveLeft(int index, int size)
{
    int checkNum = 0;
    for(int i = 0; i < size; i++)
    {
        if(index == checkNum)
        {
            return false;
        }
        checkNum  = checkNum + size;
    }
    return true;
}

int checkXY( int indexNew, int&x, int&y, int size)
{
    if(size == 2)
    {
        if(indexNew == 0)
    {
        x = 0;
        y = 0;
    }
    else if(indexNew == 1)
    {
        x = 1;
        y = 0;
    }
    else if(indexNew == 2)
    {
        x = 0;
        y = 1;
    }
    else if(indexNew == 3)
    {
        x = 1;
        y = 1;
    }
    }
    
    else if (size == 3)
    {
        if(indexNew == 0)
    {
        x = 0;
        y = 0;
    }
    else if(indexNew == 1)
    {
        x = 1;
        y = 0;
    }
    else if(indexNew == 2)
    {
        x = 2;
        y = 0;
    }
    else if(indexNew == 3)
    {
        x = 0;
        y = 1;
    }
    else if(indexNew == 4)
    {
        x = 1;
        y = 1;
    }
    else if(indexNew == 5)
    {
        x = 2;
        y = 1;
    }
    else if(indexNew == 6)
    {
        x = 0;
        y = 2;
    }
    else if(indexNew == 7)
    {
        x = 1;
        y = 2;
    }
    else if(indexNew == 8)
    {
        x = 2;
        y = 2;
    }
    }
    
    
    else if(size == 4)
    {
        if(indexNew == 0)
    {
        x = 0;
        y = 0;
    }
    else if(indexNew == 1)
    {
        x = 1;
        y = 0;
    }
    else if(indexNew == 2)
    {
        x = 2;
        y = 0;
    }
    else if(indexNew == 3)
    {
        x = 3;
        y = 0;
    }
    else if(indexNew == 4)
    {
        x = 0;
        y = 1;
    }
    else if(indexNew == 5)
    {
        x = 1;
        y = 1;
    }
    else if(indexNew == 6)
    {
        x = 2;
        y = 1;
    }
    else if(indexNew == 7)
    {
        x = 3;
        y = 1;
    }
    else if(indexNew == 8)
    {
        x = 0;
        y = 2;
    }
    else if(indexNew == 9)
    {
        x = 1;
        y = 2;
    }
    else if(indexNew == 10)
    {
        x = 2;
        y = 2;
    }
    else if(indexNew == 11)
    {
        x = 3;
        y = 2;
    }
    else if(indexNew == 12)
    {
        x = 0;
        y = 3;
    }
    else if(indexNew == 13)
    {
        x = 1;
        y = 3;
    }
    else if(indexNew == 14)
    {
        x = 2;
        y = 3;
    }
    else if(indexNew == 15)
    {
        x = 3;
        y = 3;
    }
    }
    
    
    else if (size == 5)
    {
        if(indexNew == 0)
    {
        x = 0;
        y = 0;
    }
    else if(indexNew == 1)
    {
        x = 1;
        y = 0;
    }
    else if(indexNew == 2)
    {
        x = 2;
        y = 0;
    }
    else if(indexNew == 3)
    {
        x = 3;
        y = 0;
    }
    else if(indexNew == 4)
    {
        x = 4;
        y = 0;
    }
    else if(indexNew == 5)
    {
        x = 0;
        y = 1;
    }
    else if(indexNew == 6)
    {
        x = 1;
        y = 1;
    }
    else if(indexNew == 7)
    {
        x = 2;
        y = 1;
    }
    else if(indexNew == 8)
    {
        x = 3;
        y = 1;
    }
    else if(indexNew == 9)
    {
        x = 4;
        y = 1;
    }
    else if(indexNew == 10)
    {
        x = 0;
        y = 2;
    }
    else if(indexNew == 11)
    {
        x = 1;
        y = 2;
    }
    else if(indexNew == 12)
    {
        x = 2;
        y = 2;
    }
    else if(indexNew == 13)
    {
        x = 3;
        y = 2;
    }
    else if(indexNew == 14)
    {
        x = 4;
        y = 2;
    }
    else if(indexNew == 15)
    {
        x = 0;
        y = 3;
    }
    else if(indexNew == 16)
    {
        x = 1;
        y = 3;
    }
    else if(indexNew == 17)
    {
        x = 2;
        y = 3;
    }
    else if(indexNew == 18)
    {
        x = 3;
        y = 3;
    }
    else if(indexNew == 19)
    {
        x = 4;
        y = 3;
    }
    else if(indexNew == 20)
    {
        x = 0;
        y = 4;
    }
    else if(indexNew == 21)
    {
        x = 1;
        y = 4;
    }
    else if(indexNew == 22)
    {
        x = 2;
        y = 4;
    }
    else if(indexNew == 23)
    {
        x = 3;
        y = 4;
    }
    else if(indexNew == 24)
    {
        x = 4;
        y = 4;
    }
    
    }
    return 0;
}

int uniformSearch(vector<vector<int>> initial, int size)
{
    int indexRoot = -1;
    int num = 0;
    
    int startNum = 1;
    vector<vector<int>> goal;
    goal.resize(size,vector<int>(size,0));
        for(int i = 0; i < goal.size(); i++)
            {
                for(int j = 0; j < goal[0].size(); j++)
                {
                    goal.at(i).at(j) = startNum;
                    startNum++;
                }
            }
    goal.at(goal.size()-1).at(goal.size()-1) = 0;
    
    vector<Node*> explored;
    vector<Node*> frontierCheck;
    
    Node* root = new Node();
    root->state = initial;
    root->cost = 0;
    priority_queue<Node*, vector<Node*>, Compare> frontier;
    frontier.push(root);
    frontierCheck.push_back(root);
    Node *temp = frontier.top();
    
    for(int i = 0; i < initial.size(); i++)
    {
        for(int j = 0; j < initial[0].size(); j++)
        {
            if(initial.at(i).at(j) > 0)
            {
                if(indexRoot == -1)
                {
                    num++;
                }
            }
            else if(initial.at(i).at(j) == 0)
            {
                indexRoot = num;
            }
        }
    }

    int n = 0;
    int index = indexRoot;
    
    cout << "Expanding state" << endl;
    
    for(int i = 0; i < temp->state.size(); i++)
    {
        for(int j = 0; j < temp->state[0].size(); j++)
        {
            cout << temp->state.at(i).at(j) << " ";
        }
         cout << endl;
    }
    
    while(true)
    {
        int indexChild;
        Node* temp = frontier.top();
        
        if(frontier.size() == 0)
        {
            cout << "NO solution" << endl;
            exit(0);
        }
        if(temp->state == goal)
        {
            cout << "Goal!!!!!!!!!!" << endl;
            cout << endl;
            cout << "To solve this problem the search algorithm expanded a total of " << explored.size() 
            << " nodes."<< endl; 
            cout << "The maximum number of nodes in the queue at any one time was " << frontier.size() << "." << endl;
            cout << "The depth of the goal node was " << temp->cost << "." << endl;
            return 1;
        }
        explored.push_back(temp);
        if(n != 0)
        {
            cout << "The best state to expand with a g(n) = " << frontier.top()->cost << " and h(n) = 0 is..." << endl;
            for(int i = 0; i < frontier.top()->state.size(); i++)
            {
                for(int j = 0; j < frontier.top()->state[0].size(); j++)
                {
                    cout << frontier.top()->state.at(i).at(j) << " ";
                }
                cout << endl;
            }
        }
        frontier.pop();
        cout << "yo" << endl;
        if(moveRight(index,size)) //move right
        {
            indexChild = index + 1;
            vector<vector<int>> tempState = temp->state;
            int x, y,tempNum,tempCost;
            checkXY(indexChild,x,y,size);
            tempNum  = temp->state.at(y).at(x);
            tempState.at(y).at(x-1) = tempNum;
            tempState.at(y).at(x) = 0;
            tempCost = temp->cost + 1;
            int numRe = 0;
            for(int i = 0; i < frontierCheck.size(); i++)
            {
                if(tempState != frontierCheck.at(i)->state)
                {
                    numRe++;
                }
            }
            if(numRe == (frontierCheck.size()))
            {
                Node* child = new Node(tempState,tempCost,indexChild);
                frontier.push(child);
                frontierCheck.push_back(child);
            }
        }
        
        if(moveDown(index,size))//move down
        {
            indexChild = index + size;
            vector<vector<int>> tempState = temp->state;
            int x, y,tempNum,tempCost;
            checkXY(indexChild,x,y,size);
            tempNum  = temp->state.at(y).at(x);
            tempState.at(y-1).at(x) = tempNum;
            tempState.at(y).at(x) = 0;
            tempCost = temp->cost + 1;
            int numRe = 0;
            for(int i = 0; i < frontierCheck.size(); i++)
            {
                if(tempState != frontierCheck.at(i)->state)
                {
                    numRe++;
                }
            }
            if(numRe == (frontierCheck.size()))
            {
                Node* child = new Node(tempState,tempCost,indexChild);
                frontier.push(child);
                frontierCheck.push_back(child);
            }
            
        }
        if(moveUp(index,size))//move up
        {
            indexChild = index - size;
            vector<vector<int>> tempState = temp->state;
            int x, y,tempNum,tempCost;
            checkXY(indexChild,x,y,size);
            tempNum  = temp->state.at(y).at(x);
            tempState.at(y+1).at(x) = tempNum;
            tempState.at(y).at(x) = 0;
            tempCost = temp->cost + 1;
            int numRe = 0;
            for(int i = 0; i < frontierCheck.size(); i++)
            {
                if(tempState != frontierCheck.at(i)->state)
                {
                    numRe++;
                }
            }
            if(numRe == (frontierCheck.size()))
            {
                Node* child = new Node(tempState,tempCost,indexChild);
                frontier.push(child);
                frontierCheck.push_back(child);
            }

        }
        
        if(moveLeft(index,size))//move left
        {
            indexChild = index -1;
            vector<vector<int>> tempState = temp->state;
            int x, y,tempNum,tempCost;
            checkXY(indexChild,x,y,size);
            tempNum  = temp->state.at(y).at(x);
            tempState.at(y).at(x+1) = tempNum;
            tempState.at(y).at(x) = 0;
            tempCost = temp->cost + 1;
            int numRe = 0;
            for(int i = 0; i < frontierCheck.size(); i++)
            {
                if(tempState != frontierCheck.at(i)->state)
                {
                    numRe++;
                }
            }
            if(numRe == (frontierCheck.size()))
            {
                Node* child = new Node(tempState,tempCost,indexChild);
                frontier.push(child);
                frontierCheck.push_back(child);
            }
            
        }
        
    
    cout << endl;
        
        index = frontier.top()->index;
        n++;
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Below is misplaced tile heuristic
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int numofMisplaced(vector<vector<int>> state, vector<vector<int>> goal, int size)
{
    int misplaced = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(state.at(i).at(j) != goal.at(i).at(j))
            {
                misplaced = misplaced + 1;
                
            }
        }
    }
    return misplaced;
}

int misplacedTile(vector<vector<int>> initial, int size)
{
    int indexRoot = -1;
    int num = 0;
    
    int startNum = 1;
    vector<vector<int>> goal;
    goal.resize(size,vector<int>(size,0));
        for(int i = 0; i < goal.size(); i++)
            {
                for(int j = 0; j < goal[0].size(); j++)
                {
                    goal.at(i).at(j) = startNum;
                    startNum++;
                }
            }
    goal.at(goal.size()-1).at(goal.size()-1) = 0;
    
    vector<Node*> explored;
    vector<Node*> frontierCheck;
    
    Node* root = new Node();
    root->state = initial;
    root->cost = 0;
    root->depth = 0;
    priority_queue<Node*, vector<Node*>, Compare> frontier;
    frontier.push(root);
    frontierCheck.push_back(root);
    Node *temp = frontier.top();
    
    for(int i = 0; i < initial.size(); i++)
    {
        for(int j = 0; j < initial[0].size(); j++)
        {
            if(initial.at(i).at(j) > 0)
            {
                if(indexRoot == -1)
                {
                    num++;
                }
            }
            else if(initial.at(i).at(j) == 0)
            {
                indexRoot = num;
            }
        }
    }

    int n = 0;
    int index = indexRoot;
    cout << "Expanding state" << endl;
    
    for(int i = 0; i < temp->state.size(); i++)
    {
        for(int j = 0; j < temp->state[0].size(); j++)
        {
            cout << temp->state.at(i).at(j) << " ";
        }
         cout << endl;
    }
    
    while(true)
    {
        int indexChild;
        Node* temp = frontier.top();
        
        if(frontier.size() == 0)
        {
            cout << "NO solution" << endl;
            exit(0);
        }
        if(temp->state == goal)
        {
            cout << "Goal!!!!!!!!!!" << endl;
            cout << endl;
            cout << "To solve this problem the search algorithm expanded a total of " << explored.size() 
            << " nodes."<< endl; 
            cout << "The maximum number of nodes in the queue at any one time was " << frontier.size() << "."<< endl;
            cout << "The depth of the goal node was " << temp->depth << "." << endl;
            return 1;
        }
        explored.push_back(temp);
        
        if(n != 0)
        {
            cout << "The best state to expand with a g(n) = " << frontier.top()->depth << " and h(n) = " << frontier.top()->cost - frontier.top()->depth
            <<" is..." << endl;
            for(int i = 0; i < frontier.top()->state.size(); i++)
            {
                for(int j = 0; j < frontier.top()->state[0].size(); j++)
                {
                    cout << frontier.top()->state.at(i).at(j) << " ";
                }
                cout << endl;
            }
        }
        
        frontier.pop();
    
        if(moveRight(index,size)) //move right
        {
            indexChild = index + 1;
            vector<vector<int>> tempState = temp->state;
            int x, y,tempNum,tempCost,tempDepth;
            checkXY(indexChild,x,y,size);
            tempNum  = temp->state.at(y).at(x);
            tempState.at(y).at(x-1) = tempNum;
            tempState.at(y).at(x) = 0;
            tempDepth = temp->depth + 1;
            tempCost = tempDepth + numofMisplaced(tempState,goal,size);
            int numRe = 0;
            for(int i = 0; i < frontierCheck.size(); i++)
            {
                if(tempState != frontierCheck.at(i)->state)
                {
                    numRe++;
                }
            }
            if(numRe == (frontierCheck.size()))
            {
                Node* child = new Node(tempState,tempCost,indexChild,tempDepth);
                frontier.push(child);
                frontierCheck.push_back(child);
            }
            
        }
        
        if(moveDown(index,size))//move down
        {
            indexChild = index + size;
            vector<vector<int>> tempState = temp->state;
            int x, y,tempNum,tempCost,tempDepth;
            checkXY(indexChild,x,y,size);
            tempNum  = temp->state.at(y).at(x);
            tempState.at(y-1).at(x) = tempNum;
            tempState.at(y).at(x) = 0;
            tempDepth = temp->depth + 1;
            tempCost = tempDepth + numofMisplaced(tempState,goal,size);
            int numRe = 0;
            for(int i = 0; i < frontierCheck.size(); i++)
            {
                if(tempState != frontierCheck.at(i)->state)
                {
                    numRe++;
                }
            }
            if(numRe == (frontierCheck.size()))
            {
                Node* child = new Node(tempState,tempCost,indexChild,tempDepth);
                frontier.push(child);
                frontierCheck.push_back(child);
            }
            
        }
        
        if(moveUp(index,size))//move up
        {
            indexChild = index - size;
            vector<vector<int>> tempState = temp->state;
            int x, y,tempNum,tempCost,tempDepth;
            checkXY(indexChild,x,y,size);
            tempNum  = temp->state.at(y).at(x);
            tempState.at(y+1).at(x) = tempNum;
            tempState.at(y).at(x) = 0;
            tempDepth = temp->depth + 1;
            tempCost = tempDepth + numofMisplaced(tempState,goal,size);
            int numRe = 0;
            for(int i = 0; i < frontierCheck.size(); i++)
            {
                if(tempState != frontierCheck.at(i)->state)
                {
                    numRe++;
                }
            }
            if(numRe == (frontierCheck.size()))
            {
                Node* child = new Node(tempState,tempCost,indexChild,tempDepth);
                frontier.push(child);
                frontierCheck.push_back(child);
            }
            

        }
        
        if(moveLeft(index,size))//move left
        {
            indexChild = index -1;
            vector<vector<int>> tempState = temp->state;
            int x, y,tempNum,tempCost,tempDepth;
            checkXY(indexChild,x,y,size);
            tempNum  = temp->state.at(y).at(x);
            tempState.at(y).at(x+1) = tempNum;
            tempState.at(y).at(x) = 0;
            tempDepth = temp->depth + 1;
            tempCost = tempDepth + numofMisplaced(tempState,goal,size);
            int numRe = 0;
            for(int i = 0; i < frontierCheck.size(); i++)
            {
                if(tempState != frontierCheck.at(i)->state)
                {
                    numRe++;
                }
            }
            if(numRe == (frontierCheck.size()))
            {
                Node* child = new Node(tempState,tempCost,indexChild,tempDepth);
                frontier.push(child);
                frontierCheck.push_back(child);
            }
            
        }
        
    cout << endl;
        
        index = frontier.top()->index;
        n++;
    }
}    
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Below is manhattan distance heuristic
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int numofMoves(vector<vector<int>> state, vector<vector<int>> goal,int size)
{
    int moves = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(state.at(i).at(j) != goal.at(i).at(j))
            {
                if(size == 2)
                {
                    if(state.at(i).at(j) == 1)
                {
                    moves = moves + abs(i - 0) + abs(j - 0);
                }
                else if(state.at(i).at(j) == 2)
                {
                    moves = moves + abs(i - 0) + abs(j - 1);
                }
                else if(state.at(i).at(j) == 3)
                {
                    moves = moves + abs(i - 1) + abs(j - 0);
                }
                else if(state.at(i).at(j) == 4)
                {
                    moves = moves + abs(i - 1) + abs(j - 1);
                }
                }
                else if(size == 3)
                {
                if(state.at(i).at(j) == 1)
                {
                    moves = moves + abs(i - 0) + abs(j - 0);
                }
                else if(state.at(i).at(j) == 2)
                {
                    moves = moves + abs(i - 0) + abs(j - 1);
                }
                else if(state.at(i).at(j) == 3)
                {
                    moves = moves + abs(i - 0) + abs(j - 2);
                }
                else if(state.at(i).at(j) == 4)
                {
                    moves = moves + abs(i - 1) + abs(j - 0);
                }
                else if(state.at(i).at(j) == 5)
                {
                    moves = moves + abs(i - 1) + abs(j - 1);
                }
                else if(state.at(i).at(j) == 6)
                {
                    moves = moves + abs(i - 1) + abs(j - 2);
                }
                else if(state.at(i).at(j) == 7)
                {
                    moves = moves + abs(i - 2) + abs(j - 0);
                }
                else if(state.at(i).at(j) == 8)
                {
                    moves = moves + abs(i - 2) + abs(j - 1);
                }
                }
                
                
                else if(size == 4)
                {
                    if(state.at(i).at(j) == 1)
                {
                    moves = moves + abs(i - 0) + abs(j - 0);
                }
                else if(state.at(i).at(j) == 2)
                {
                    moves = moves + abs(i - 0) + abs(j - 1);
                }
                else if(state.at(i).at(j) == 3)
                {
                    moves = moves + abs(i - 0) + abs(j - 2);
                }
                else if(state.at(i).at(j) == 4)
                {
                    moves = moves + abs(i - 0) + abs(j - 3);
                }
                else if(state.at(i).at(j) == 5)
                {
                    moves = moves + abs(i - 1) + abs(j - 0);
                }
                else if(state.at(i).at(j) == 6)
                {
                    moves = moves + abs(i - 1) + abs(j - 1);
                }
                else if(state.at(i).at(j) == 7)
                {
                    moves = moves + abs(i - 1) + abs(j - 2);
                }
                else if(state.at(i).at(j) == 8)
                {
                    moves = moves + abs(i - 1) + abs(j - 3);
                }
                else if(state.at(i).at(j) == 9)
                {
                    moves = moves + abs(i - 2) + abs(j - 0);
                }
                else if(state.at(i).at(j) == 10)
                {
                    moves = moves + abs(i - 2) + abs(j - 1);
                }
                else if(state.at(i).at(j) == 11)
                {
                    moves = moves + abs(i - 2) + abs(j - 2);
                }
                else if(state.at(i).at(j) == 12)
                {
                    moves = moves + abs(i - 2) + abs(j - 3);
                }
                else if(state.at(i).at(j) == 13)
                {
                    moves = moves + abs(i - 3) + abs(j - 0);
                }
                else if(state.at(i).at(j) == 14)
                {
                    moves = moves + abs(i - 3) + abs(j - 1);
                }
                else if(state.at(i).at(j) == 15)
                {
                    moves = moves + abs(i - 3) + abs(j - 2);
                }
                }
                
                
                else if(size == 5)
                {
                    if(state.at(i).at(j) == 1)
                {
                    moves = moves + abs(i - 0) + abs(j - 0);
                }
                else if(state.at(i).at(j) == 2)
                {
                    moves = moves + abs(i - 0) + abs(j - 1);
                }
                else if(state.at(i).at(j) == 3)
                {
                    moves = moves + abs(i - 0) + abs(j - 2);
                }
                else if(state.at(i).at(j) == 4)
                {
                    moves = moves + abs(i - 0) + abs(j - 3);
                }
                else if(state.at(i).at(j) == 5)
                {
                    moves = moves + abs(i - 0) + abs(j - 4);
                }
                else if(state.at(i).at(j) == 6)
                {
                    moves = moves + abs(i - 1) + abs(j - 0);
                }
                else if(state.at(i).at(j) == 7)
                {
                    moves = moves + abs(i - 1) + abs(j - 1);
                }
                else if(state.at(i).at(j) == 8)
                {
                    moves = moves + abs(i - 1) + abs(j - 2);
                }
                else if(state.at(i).at(j) == 9)
                {
                    moves = moves + abs(i - 1) + abs(j - 3);
                }
                else if(state.at(i).at(j) == 10)
                {
                    moves = moves + abs(i - 1) + abs(j - 4);
                }
                else if(state.at(i).at(j) == 11)
                {
                    moves = moves + abs(i - 2) + abs(j - 0);
                }
                else if(state.at(i).at(j) == 12)
                {
                    moves = moves + abs(i - 2) + abs(j - 1);
                }
                else if(state.at(i).at(j) == 13)
                {
                    moves = moves + abs(i - 2) + abs(j - 2);
                }
                else if(state.at(i).at(j) == 14)
                {
                    moves = moves + abs(i - 2) + abs(j - 3);
                }
                else if(state.at(i).at(j) == 15)
                {
                    moves = moves + abs(i - 2) + abs(j - 4);
                }
                else if(state.at(i).at(j) == 16)
                {
                    moves = moves + abs(i - 3) + abs(j - 0);
                }
                else if(state.at(i).at(j) == 17)
                {
                    moves = moves + abs(i - 3) + abs(j - 1);
                }
                else if(state.at(i).at(j) == 18)
                {
                    moves = moves + abs(i - 3) + abs(j - 2);
                }
                else if(state.at(i).at(j) == 19)
                {
                    moves = moves + abs(i - 3) + abs(j - 3);
                }
                else if(state.at(i).at(j) == 20)
                {
                    moves = moves + abs(i - 3) + abs(j - 4);
                }
                else if(state.at(i).at(j) == 21)
                {
                    moves = moves + abs(i - 4) + abs(j - 0);
                }
                else if(state.at(i).at(j) == 22)
                {
                    moves = moves + abs(i - 4) + abs(j - 1);
                }
                else if(state.at(i).at(j) == 23)
                {
                    moves = moves + abs(i - 4) + abs(j - 2);
                }
                else if(state.at(i).at(j) == 24)
                {
                    moves = moves + abs(i - 4) + abs(j - 3);
                }
                }
            }
        }
    }
    return moves;
}
    
    int manhattanDistance(vector<vector<int>> initial, int size)
    {
    int indexRoot = -1;
    int num = 0;
    
    int startNum = 1;
    vector<vector<int>> goal;
    goal.resize(size,vector<int>(size,0));
        for(int i = 0; i < goal.size(); i++)
            {
                for(int j = 0; j < goal[0].size(); j++)
                {
                    goal.at(i).at(j) = startNum;
                    startNum++;
                }
            }
    goal.at(goal.size()-1).at(goal.size()-1) = 0;
    
    vector<Node*> explored;
    vector<Node*> frontierCheck;
    
    Node* root = new Node();
    root->state = initial;
    root->cost = 0;
    root->depth = 0;
    priority_queue<Node*, vector<Node*>, Compare> frontier;
    frontier.push(root);
    frontierCheck.push_back(root);
    Node *temp = frontier.top();
    
    for(int i = 0; i < initial.size(); i++)
    {
        for(int j = 0; j < initial[0].size(); j++)
        {
            if(initial.at(i).at(j) > 0)
            {
                if(indexRoot == -1)
                {
                    num++;
                }
            }
            else if(initial.at(i).at(j) == 0)
            {
                indexRoot = num;
            }
        }
    }

    int n = 0;
    int index = indexRoot;
    cout << "Expanding state" << endl;
    
    for(int i = 0; i < temp->state.size(); i++)
    {
        for(int j = 0; j < temp->state[0].size(); j++)
        {
            cout << temp->state.at(i).at(j) << " ";
        }
         cout << endl;
    }
    
    while(true)
    {
        int indexChild;
        Node* temp = frontier.top();
        
        if(frontier.size() == 0)
        {
            cout << "NO solution" << endl;
            exit(0);
        }
        if(temp->state == goal)
        {
            cout << "Goal!!!!!!!!!!" << endl;
            cout << endl;
            //cout << "The total number " << frontierCheck.size() << endl;
            cout << "To solve this problem the search algorithm expanded a total of " << explored.size() 
            << " nodes."<< endl; 
            cout << "The maximum number of nodes in the queue at any one time was " << frontier.size() << "." << endl;
            cout << "The depth of the goal node was " << temp->depth << "." << endl;
            return 1;
        }
        explored.push_back(temp);
        
        if(n != 0)
        {
            cout << "The best state to expand with a g(n) = " << frontier.top()->depth << " and h(n) = " << frontier.top()->cost - frontier.top()->depth
            <<" is..." << endl;
            for(int i = 0; i < frontier.top()->state.size(); i++)
            {
                for(int j = 0; j < frontier.top()->state[0].size(); j++)
                {
                    cout << frontier.top()->state.at(i).at(j) << " ";
                }
                cout << endl;
            }
        }
        
        frontier.pop();
    
        if(moveRight(index,size)) //move right
        {
            indexChild = index + 1;
            vector<vector<int>> tempState = temp->state;
            int x, y,tempNum,tempCost,tempDepth;
            cout << indexChild << endl;
            checkXY(indexChild,x,y,size);
            tempNum  = temp->state.at(y).at(x);
            tempState.at(y).at(x-1) = tempNum;
            tempState.at(y).at(x) = 0;
            tempDepth = temp->depth + 1;
            tempCost = tempDepth + numofMoves(tempState,goal,size);
            int numRe = 0;
            for(int i = 0; i < frontierCheck.size(); i++)
            {
                if(tempState != frontierCheck.at(i)->state)
                {
                    numRe++;
                }
            }
            if(numRe == (frontierCheck.size()))
            {
                Node* child = new Node(tempState,tempCost,indexChild,tempDepth);
                frontier.push(child);
                frontierCheck.push_back(child);
            }
            
        }
        
        if(moveDown(index,size))//move down
        {
            indexChild = index + size;
            vector<vector<int>> tempState = temp->state;
            int x, y,tempNum,tempCost,tempDepth;
            checkXY(indexChild,x,y,size);
            tempNum  = temp->state.at(y).at(x);
            tempState.at(y-1).at(x) = tempNum;
            tempState.at(y).at(x) = 0;
            tempDepth = temp->depth + 1;
            tempCost = tempDepth + numofMoves(tempState,goal,size);
            int numRe = 0;
            for(int i = 0; i < frontierCheck.size(); i++)
            {
                if(tempState != frontierCheck.at(i)->state)
                {
                    numRe++;
                }
            }
            if(numRe == (frontierCheck.size()))
            {
                Node* child = new Node(tempState,tempCost,indexChild,tempDepth);
                frontier.push(child);
                frontierCheck.push_back(child);
            }
            
        }
        
        if(moveUp(index,size))//move up
        {
            indexChild = index - size;
            vector<vector<int>> tempState = temp->state;
            int x, y,tempNum,tempCost,tempDepth;
            checkXY(indexChild,x,y,size);
            tempNum  = temp->state.at(y).at(x);
            tempState.at(y+1).at(x) = tempNum;
            tempState.at(y).at(x) = 0;
            tempDepth = temp->depth + 1;
            tempCost = tempDepth + numofMoves(tempState,goal,size);
            int numRe = 0;
            for(int i = 0; i < frontierCheck.size(); i++)
            {
                if(tempState != frontierCheck.at(i)->state)
                {
                    numRe++;
                }
            }
            if(numRe == (frontierCheck.size()))
            {
                Node* child = new Node(tempState,tempCost,indexChild,tempDepth);
                frontier.push(child);
                frontierCheck.push_back(child);
            }
            

        }
        
        if(moveLeft(index,size))//move left
        {
            indexChild = index -1;
            vector<vector<int>> tempState = temp->state;
            int x, y,tempNum,tempCost,tempDepth;
            checkXY(indexChild,x,y,size);
            tempNum  = temp->state.at(y).at(x);
            tempState.at(y).at(x+1) = tempNum;
            tempState.at(y).at(x) = 0;
            tempDepth = temp->depth + 1;
            tempCost = tempDepth + numofMoves(tempState,goal,size);
            int numRe = 0;
            for(int i = 0; i < frontierCheck.size(); i++)
            {
                if(tempState != frontierCheck.at(i)->state)
                {
                    numRe++;
                }
            }
            if(numRe == (frontierCheck.size()))
            {
                Node* child = new Node(tempState,tempCost,indexChild,tempDepth);
                frontier.push(child);
                frontierCheck.push_back(child);
            }
            
        }
        
    cout << endl;
        
        index = frontier.top()->index;
        n++;
    
    }
    

}

int main(int argc, char** argv)
{
    int DorO, size;
    vector<vector<int>> start;
                                
    cout << "Welcome to 861169589's 8-puzzle solver." << endl;
    cout << "Type '1' to use a default puzzle and '2' to enter your own puzzle" << endl;
    cin >> DorO;
    if(DorO == 1)
    {
        vector<vector<int>> temp { { 0, 1, 2 },
                                { 4, 8,3 },
                                {7,6, 5}}; //right,down,up,left
        start = temp;
        size = 3;
    }
    else if(DorO == 2)
    {
        
        cout << "Enter length of puzzle (Between 2 and 5)" << endl;
        cin >> size;
        cout << "Enter your puzzle, use 0 to represent the blank" << endl;
        cout << "Enter the values, press enter after each one" << endl;
        
        vector<vector<int>> temp;
        temp.resize(size,vector<int>(size,0));
        for(int i = 0; i < temp.size(); i++)
            {
                for(int j = 0; j < temp[0].size(); j++)
                {
                    cin >> temp.at(i).at(j);
                }
            }
            
        for(int i = 0; i < temp.size(); i++)
            {
                for(int j = 0; j < temp[0].size(); j++)
                {
                    cout << temp.at(i).at(j) << " ";
                }
                cout << endl;
            }
        start = temp;
    }
    
    int searchNum;
    cout << "Enter your choice of algorithm" << endl;
    cout << "1. Uniform cost search." << endl;
    cout << "2. A* search with the Misplaced Tile heuristic." << endl;
    cout << "3. A* search with the Manhattan Distance heuristic." << endl;
    cin >> searchNum;
    cout << endl;
    
    if(searchNum == 1)
    {
        uniformSearch(start,size);

    }
    else if(searchNum == 2)
    {
        misplacedTile(start,size);
    }
    else if(searchNum == 3)
    {
        manhattanDistance(start,size);
    }
    
    return 0;
}