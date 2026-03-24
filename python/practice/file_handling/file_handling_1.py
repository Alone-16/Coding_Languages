# Simple question (CSV)
import csv

with open("marks.csv", "w", newline = "") as file:
    writer = csv.writer(file)
    writer.writerow(["name", "marks"])
    writer.writerow(["Alone", 85])
    writer.writerow(["Alex", 90])


with open("marks.csv", "r") as file:
    reader = csv.reader(file)
    for row in reader:
        print(row)


# Real Life question (JSON)
import json

data = {
    "name": "Alone",
    "age": 20,
    "course": "BTech"
}

with open("profile.json", "w") as file:  # newline="" not required in json but dont break anything 
    json.dump(data, file)

with open("profile.json", "r") as file:
    data_print = json.load(file)
    print(data_print)