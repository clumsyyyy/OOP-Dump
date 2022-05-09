public class ListMap implements Map {
    private ListMapEntry first;

    public void set(String key, String value){
        if (this.first == null){
            this.first = new ListMapEntry(key, value);
        } else {
            ListMapEntry p = this.first;
            while (p.getNext() != null){
                if (p.getKey().equals(key)){
                    p.setValue(value);
                    return;
                }
                p = p.getNext();
            }
            if (p.getKey().equals(key)){
                p.setValue(value);
            } else {
                p.setNext(new ListMapEntry(key, value));
            }
        }
    }
    
    public String get(String key){
        ListMapEntry p = this.first;
        while (p != null){
            if (p.getKey().equals(key)){
                return p.getValue();
            }
            p = p.getNext();
        }
        return null;
    }

    public int size(){
        int count = 0;
        ListMapEntry p = this.first;
        while (p != null){
            count += 1;
            p = p.getNext();
        }
        return count;
    }
}
