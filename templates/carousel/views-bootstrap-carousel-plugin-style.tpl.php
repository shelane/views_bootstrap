<div id="views-bootstrap-carousel-<?php print $id ?>" class="carousel slide <?php print $classes ?>">
  <ol class="carousel-indicators">
    <?php foreach ($rows as $key => $value): ?>
      <li data-target="#views-bootstrap-carousel-<?php print $id ?>" data-slide-to="<?php print $key ?>" class="<?php if ($key === 0) print 'active' ?>"></li>
    <?php endforeach ?>
  </ol>
  <!-- Carousel items -->
  <div class="carousel-inner">
    <?php foreach ($rows as $key => $row): ?>
      <div class="item <?php if ($key === 0) print 'active' ?>">
        <?php print $row ?>
      </div>
    <?php endforeach ?>
  </div>
  <!-- Carousel nav -->
  <a class="carousel-control left" href="#views-bootstrap-carousel-<?php print $id ?>" data-slide="prev">&lsaquo;</a>
  <a class="carousel-control right" href="#views-bootstrap-carousel-<?php print $id ?>" data-slide="next">&rsaquo;</a>
</div>
