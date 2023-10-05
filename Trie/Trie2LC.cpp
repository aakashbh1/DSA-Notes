class TrieNode
{
    TrieNode* links[26];
    public:
    int word_count=0;
    int prefix_count=0;
    
    bool containsKey(char ch)
    {
        return links[ch-'a']!=NULL;
    }
    
    void putNode(char ch,TrieNode* node)
    {
        links[ch-'a']=node;
    }
    
    TrieNode* getNode(char ch)
    {
        return links[ch-'a'];
    }
};

class Trie {
    TrieNode* root;
public:
    Trie() 
    {
        root=new TrieNode();
    }
    
    void insert(string word) 
    {
        TrieNode* node=root;
        for(auto &ch:word)
        {
            if(!node->containsKey(ch))
                node->putNode(ch,new TrieNode());
            
            node->prefix_count++;
            node=node->getNode(ch);
        }
        
        node->prefix_count++;
        node->word_count++;
    }
    
    int countWordsEqualTo(string word) 
    {
        TrieNode* node=root;
        for(auto &ch:word)
        {
            if(!node->containsKey(ch))
                return 0;
            
            node=node->getNode(ch);
        }
        
        return node->word_count;
    }
    
    int countWordsStartingWith(string prefix) 
    {
         TrieNode* node=root;
        for(auto &ch:word)
        {
            if(!node->containsKey(ch))
                return 0;
            
            node=node->getNode(ch);
        }
        
        return node->prefix_count;
    }
    
    void erase(string word)
    {
        TrieNode* node=root;
        for(auto &ch:word)
        {
            if(node->prefix_count>0)
            node->prefix_count--;
            else
                return;
            node=node->getNode(ch);
        }
        
        node->prefix_count--;
        if(node->word_count>0)
            node->word_count--;
    }
};
