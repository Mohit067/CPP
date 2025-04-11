f(pi+1 == k) return arr[pi];
    else if (pi+1 < k) return kthSmallest(arr, pi+1, ei, k);
    else kthSmallest(arr, si, pi-1, k);