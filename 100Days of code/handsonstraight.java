import java.util.Arrays;
import java.util.PriorityQueue;

class Solution {
    public static boolean isNStraightHand(int[] hand, int groupSize) {

        if (hand.length % groupSize == 1) {
            return false;
        }

        PriorityQueue<Pair> pq = new PriorityQueue<>((p1, p2) -> {
            if (p1.element == p2.element) {
                return Integer.compare(p1.cnt, p2.cnt);
            }
            return Integer.compare(p1.element, p2.element);
        });

        Arrays.sort(hand);

        for (int tmp : hand) {
            if (pq.isEmpty()) {
                pq.add(new Pair(tmp, 1));
                if (pq.peek().cnt == groupSize) pq.poll();
                continue;
            }

            if (tmp - 1 == pq.peek().element) {
                Pair pair = pq.poll();
                pair.element = tmp;
                pair.cnt++;
                if (pair.cnt < groupSize) {
                    pq.add(pair);
                }
            } else {
                pq.add(new Pair (tmp, 1));
            }
        }

        if (pq.isEmpty()) {
            return true;
        }

        return false;

    }

    static class Pair {
        int element;
        int cnt;
        public Pair (int element, int cnt) {
            this.element = element;
            this.cnt = cnt;
        }
    }
}

