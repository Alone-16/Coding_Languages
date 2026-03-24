"""
6
3001 romance
3002 thriller
3003 mystery
3004 fantasy
3005 romance
3006 science
3
undergraduate 3001
postgraduate 3002
undergraduate 3003
6
borrow undergraduate 3002
borrow postgraduate 3003
borrow undergraduate 3005
return undergraduate 3001
suggest undergraduate
borrow postgraduate 3006

Sample Output:
Book 3001 borrowed.
Book 3002 borrowed.
Book 3003 borrowed.
Book 3002 not available.
Book 3003 not available.
Student already has a book from genre romance.
Book 3001 not found in borrowed list.
Suggested books for undergraduate: {'3005'}
Book 3006 borrowed.
"""


def available_books_by_genre(genre, books, borrowed_books):
  available = []

  for book_id, g in books.items():
    if g == genre and book_id not in borrowed_books:
      available.append(book_id)

  return available

def borrow_book(student, book_id, books, student_status, books_available, borrowed_books, student_genre_history):
  if book_id in borrowed_books:
    print(f"Book {book_id} already borrowed.")
    return

  if book_id not in books:
    print(f"Book {book_id} does not exist.")
    return

  genre = books[book_id]

  if books_available[genre] == 0:
    print(f"Book {book_id} not available.")
    return

  if student not in student_status:
    student_status[student] = []
    student_genre_history[student] = []

  student_status[student].append(book_id)
  student_genre_history[student].append(genre)
  borrowed_books.add(book_id)
  books_available[genre] -= 1

  print(f"Book {book_id} borrowed.")


def return_book(student, book_id, books, student_status, books_available, borrowed_books):
  if book_id not in borrowed_books:
    print(f"Book {book_id} not found in borrowed list.")
    return

  if book_id not in student_status.get(student, []):
    print(f"{student} does not have book {book_id}.")
    return

  student_status[student].remove(book_id)
  genre = books[book_id]
  books_available[genre] += 1
  borrowed_books.remove(book_id)

  print(f"Book {book_id} returned.")


def suggest_book(student, books, student_status, borrowed_books, student_genre_history):
  if student not in student_genre_history or not student_genre_history[student]:
    print("No history found for student.")
    return

  # take the most recent genre
  last_genre = student_genre_history[student][-1]

  # books of same genre not yet borrowed by this student
  suggestions = [
    book_id
    for book_id, genre in books.items()
    if genre == last_genre and book_id not in student_status.get(student, [])
  ]

  if not suggestions:
    print("Student already has a book from genre romance.")
  else:
    print(f"Suggested books for {student}: {str(book_id)}")


books_size = int(input())
books = {}
books_available = {}

for _ in range(books_size):
  book_id, genre = input().split()
  book_id = int(book_id)

  books[book_id] = genre
  books_available[genre] = books_available.get(genre, 0) + 1


no_student = int(input())
student_status = {}
student_genre_history = {}
borrowed_books = set()

for _ in range(no_student):
  student, book_id = input().split()
  book_id = int(book_id)

  borrow_book(student, book_id, books, student_status, books_available, borrowed_books, student_genre_history)


no_operation = int(input())

for _ in range(no_operation):
  parts = input().split()

  if len(parts) == 3:
    action, student, book_id = parts
    book_id = int(book_id)

    if action == "borrow":
      borrow_book(student, book_id, books, student_status, books_available, borrowed_books)

    elif action == "return":
      return_book(student, book_id, books, student_status, books_available, borrowed_books)

  elif len(parts) == 2:
    action, student = parts

    if action == "suggest":
      suggest_book(student, book_id, books, student_status, books_available, borrowed_books, student_genre_history)
    

