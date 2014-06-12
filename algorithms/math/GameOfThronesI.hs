-- 12.??.13

import Data.List

isPalindrome lst = foldl (\acc sublist -> if(length sublist `mod` 2 == 1) then acc+1 else acc) 0 parts
    where parts = group $ sort lst
    
main = do
    input <- getLine
    putStrLn $ if (isPalindrome input > 1) then "NO" else "YES"