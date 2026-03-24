# Abstract Classes & Interface

# Super Simple question
from abc import ABC, abstractmethod

class Device(ABC):
    @abstractmethod
    def turn_on(self):
        pass

class Phone(Device):
    def turn_on(self):
        return "Phone is turning on"
    
class Laptop(Device):
    def turn_on(self):
        return "Laptop is turning on"
    
devices = [Phone(), Laptop()]
for d in devices:
    print(d.turn_on())
    


# Real life question
from abc import ABC, abstractmethod

class Notification(ABC):
    def __init__(self, message):
        self.message = message

    @abstractmethod
    def send(self):
        pass

class EmailNotification(Notification):
    def send(self):
        return f"Email sent: {self.message}"


class SMSNotification(Notification):
    def send(self):
        return f"SMS sent: {self.message}"
    
notifications = [
    EmailNotification("Hello"),
    SMSNotification("Hello")
]

for n in notifications:
    print(n.send())
