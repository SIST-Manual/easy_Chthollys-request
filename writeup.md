Since `zcy number` should be even length and palindrome, we can simply enumerate the first half of the number from 1 to k, then the remaining part of each number should be the inverse string of the first half. The answer is the sum of these numbers mod p.

既然`zcy数`都是偶数长度的回文数，我们可以简单地从1到k枚举数的前半部分，后半部分则是前半部分的倒序。答案即为这些数的和模p。