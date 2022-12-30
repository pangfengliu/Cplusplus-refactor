class Paper {
 private:
  int width;
  int height;
 public:
  Paper(const int w = 0, const int h = 0): width(w), height(h) {};
  int getWidth() const {return width;};
  int getHeight() const {return height;};
  bool onTop(const Paper &p) const {
    return
      ((width <= p.width && height <= p.height) ||
       (width <= p.height && height <= p.width));
  }
};
