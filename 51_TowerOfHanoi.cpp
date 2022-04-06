TOH(n, Source, Auxiliary, Destination);

TOH(n - 1, A, C, B);

move n disk from A to C

    TOH(n - 1, B, A, C);