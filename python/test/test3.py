def age_above(limit):
  def check(student):
    return student["age"] > limit
  return check


def city_is(city):
  def check(student):
    return student["city"] == city
  return check


def score_between(minimum, maximum):
  def check(student):
    return minimum <= student["score"] <= maximum
  return check


def name_starts_with(character):
  def check(student):
    return student["name"].startswith(character)
  return check


n = int(input())
data = []

for _ in range(n):
  name, age, score, city = input().split()

  data.append({
    "name": name,
    "age": int(age),
    "score": int(score),
    "city": city
})
 
  
m = int(input())
filters = []

for _ in range(m):
  filters.append(input())


filters_functions = []
filter_map = {
    "age_above": lambda: age_above(int(input())),
    "city_is": lambda: city_is(input()),
    "score_between": lambda: score_between(*map(int, input().split())),
    "name_starts_with": lambda: name_starts_with(input())
}

for step in filters:
    filters_functions.append(filter_map[step]())


for f in filters_functions:
  data = list(filter(f, data))

names = sorted(student["name"] for student in data)

for name in names:
    print(name)

