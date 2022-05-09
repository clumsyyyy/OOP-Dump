import java.util.HashMap;
import java.util.ArrayList;
import java.util.Map;
/*
NIM: 13520124
Nama: Owen Christian Wijaya
Praktikum 5 OOP
 */
public class GofudServer implements EventBroker {
  // maps a topic to a list of subscribers
  // feel free to change/add data structures
  private Map<String, ArrayList<Subscriber>> topics;

  public GofudServer() {
    this.topics = new HashMap<>();
  }

  // TODO: method when server/broker is sending an event through a topic
  public void sendEvent(String topic, Event event) {
    if (topics.containsKey(topic)){
      for (Subscriber s: topics.get(topic)){
        s.onEvent(event);
      }
    }
  }
  
  // TODO: method when a subscriber wants to subscribe to a topic
  public void addSubscriber(String topic, Subscriber subscriber) {
    ArrayList<Subscriber> listOfTopics = topics.get(topic);
    if (!topics.containsKey(topic)){
      ArrayList<Subscriber> sList = new ArrayList<Subscriber>();
      sList.add(subscriber);
      topics.put(topic, sList);
    } else {
      listOfTopics.add(subscriber);
    }
  }
}