class Solution(object):
    def countGoodRectangles(self, rectangles):
       

        largest_length = 0
        max_len_rectangles = 0
        
        for rectangle in rectangles:
            largest_length = max(largest_length, min(rectangle))
            
        
        for rectangle in rectangles:
            if min(rectangle) == largest_length:
                max_len_rectangles += 1
        
        return max_len_rectangles
