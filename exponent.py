from typing import List


# sets
# unordered, distinct, mutable

# arr = [1,2,4, 4 ,4 ,2, 2]

# vowel = {'a', 'e', 'i', 'o'}

# arrToSet = set(arr)
# print(arrToSet)


# def getShortestUniqueSubstring(arr:List, substr:str):
#     if not arr or not substr:
#         return 'arr and str need to be populated'
    
    
#     arrSetForMembershipCheck = set(arr)
#     numberOfCharactersWeNeedToFind = len(arr)
#     found = 0
#     characterCount = {}
    
#     leftpointer= 0
#     best_window = float('inf')
#     best_start = 0
    
    
#     for rightpointer in range(len(substr)):
#         character = substr[rightpointer]
        
#         if  character in arrSetForMembershipCheck:
            
#             if character not in characterCount:
#                 characterCount[character] = 0
                
#             characterCount[character] += 1
            
#             if characterCount[character] == 1:
#                 found += 1
                
#         while found == numberOfCharactersWeNeedToFind:
            
#             if rightpointer - leftpointer + 1 < best_window:
#                 best_window = rightpointer - leftpointer + 1
#                 best_start += leftpointer
                
#             charactertoremove = substr[leftpointer]
            
#             if charactertoremove in arrSetForMembershipCheck:
                
#                 characterCount[charactertoremove]  -= 1
#                 if characterCount[charactertoremove] == 0:
#                     found -= 1
                    
#             headpointer += 1
            
#     return substr[best_start:best_start + best_window] if best_window != float('inf') else "no substring found"
                

def getShortestUniqueSubstring(arr: List, substr: str):
    if not arr or not substr:
        return 'arr and str need to be populated'
    
    arrSet = set(arr)
    numberOfCharactersWeNeedToFind = len(arr)
    found = 0
    characterCount = {}
    
    
    # state for shrinking
    leftpointer = 0
    best_window = float('inf')
    best_start = 0
    
    for rightpointer in range(len(substr)):
        character = substr[rightpointer]
        
        if character in arrSet:
            
            if character not in characterCount:
                characterCount[character] = 0
                
            characterCount[character] += 1
            
            if characterCount[character] == 1:
                found += 1
                
        while found == numberOfCharactersWeNeedToFind:
            
            if rightpointer - leftpointer + 1 < best_window:
                best_window = rightpointer - leftpointer + 1
                best_start = leftpointer  
                
            charactertoremove = substr[leftpointer]
            
            if charactertoremove in arrSet:
                
                characterCount[charactertoremove] -= 1
                if characterCount[charactertoremove] == 0:
                    found -= 1
                    
            leftpointer += 1  # Fixed: use consistent variable name
            
    return substr[best_start:best_start + best_window] if best_window != float('inf') else "no substring found"





Given a 2D array (matrix) inputMatrix of integers, create a function spiralCopy that copies inputMatrix’s values into
a 1D array in a spiral order, clockwise. Your function then should return that array. Analyze the time and space 
complexities of your solution.

Example: