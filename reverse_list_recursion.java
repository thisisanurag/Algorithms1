class Reversal
{
   Node reverseList(Node head)
   {
        if (head.next==null)
        {
            return head;
        }
        Node newHead= reverseList(head.next);
        head.next.next=head;
        head.next=null;
        return newHead;
   }
}
