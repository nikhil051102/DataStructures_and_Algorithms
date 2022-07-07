Node *ptr = head;
vector<Node *> v;
// Node*ptr1 = head;
while (ptr != NULL)
{
    if (s.find(ptr->data))
    {
        Node *temp = ptr;
        for (int i = 0; i < s.size(); i++)
        {
            if (s.find(ptr->data) == -1)
            {
                break;
            }
            ptr = ptr->next;
            if (i == s.size())
            {
                int x = 0;
                while (x < s.size())
                {
                    v.push_back(temp);
                    temp = temp->next;
                }
            }
        }
    }
    ptr = ptr->next;
}