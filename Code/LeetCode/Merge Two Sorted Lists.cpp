#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *buildList(int n)
{
    ListNode *head = nullptr;
    ListNode *tail = nullptr;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        ListNode *node = new ListNode(x);
        if (!head)
        {
            head = tail = node;
        }
        else
        {
            tail->next = node;
            tail = node;
        }
    }
    return head;
}

void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val;
        if (head->next)
            cout << " , ";
        head = head->next;
    }
    cout << endl;
}

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode dummy(0);
        ListNode *tail = &dummy;

        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                tail->next = list1;
                list1 = list1->next;
            }
            else
            {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        tail->next = list1 ? list1 : list2;

        return dummy.next;
    }
};

int main()
{
    _;
    int n1, n2;
    cin >> n1;
    ListNode *list1 = buildList(n1);
    cin >> n2;
    ListNode *list2 = buildList(n2);

    Solution s;
    ListNode *merged = s.mergeTwoLists(list1, list2);

    printList(merged);

    return 0;
}
